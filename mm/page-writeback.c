/*
 * mm/page-writeback.c
 *
 * Copyright (C) 2002, Linus Torvalds.
 * Copyright (C) 2007 Red Hat, Inc., Peter Zijlstra <pzijlstr@redhat.com>
 *
 * Contains functions related to writing back dirty pages at the
 * address_space level.
 *
 * 10Apr2002	Andrew Morton
 *		Initial version
 */

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/spinlock.h>
#include <linux/fs.h>
#include <linux/mm.h>
#include <linux/swap.h>
#include <linux/slab.h>
#include <linux/pagemap.h>
#include <linux/writeback.h>
#include <linux/init.h>
#include <linux/backing-dev.h>
#include <linux/task_io_accounting_ops.h>
#include <linux/blkdev.h>
#include <linux/mpage.h>
#include <linux/rmap.h>
#include <linux/percpu.h>
#include <linux/notifier.h>
#include <linux/smp.h>
#include <linux/sysctl.h>
#include <linux/cpu.h>
#include <linux/syscalls.h>
#include <linux/buffer_head.h>
#include <linux/pagevec.h>
#include <trace/events/writeback.h>

/*
 * Don't sleep more than 200ms at a time in balance_dirty_pages().
 */
#define MAX_PAUSE	max(HZ/5, 1)

/* The following parameters are exported via /proc/sys/vm */

/*
 * Start background writeback (via writeback threads) at this percentage
 */
int dirty_background_ratio = 10;

/*
 * dirty_background_bytes starts at 0 (disabled) so that it is a function of
 * dirty_background_ratio * the amount of dirtyable memory
 */
unsigned long dirty_background_bytes;

/*
 * free highmem will not be subtracted from the total free memory
 * for calculating free ratios if vm_highmem_is_dirtyable is true
 */
int vm_highmem_is_dirtyable;

/*
 * The generator of dirty data starts writeback at this percentage
 */
int vm_dirty_ratio = 5;

/*
 * vm_dirty_bytes starts at 0 (disabled) so that it is a function of
 * vm_dirty_ratio * the amount of dirtyable memory
 */
unsigned long vm_dirty_bytes;

/*
 * The interval between `kupdate'-style writebacks
 */
unsigned int dirty_writeback_interval = 5 * 100; /* centiseconds */

/*
 * The longest time for which data is allowed to remain dirty
 */
unsigned int dirty_expire_interval = 30 * 100; /* centiseconds */

/*
 * Flag that makes the machine dump writes/reads and block dirtyings.
 */
int block_dump;

/*
 * Flag that puts the machine in "laptop mode". Doubles as a timeout in jiffies:
 * a full sync is triggered after this time elapses without any disk activity.
 */
int laptop_mode;

EXPORT_SYMBOL(laptop_mode);

/* End of sysctl-exported parameters */


/*
 * Scale the writeback cache size proportional to the relative writeout speeds.
 *
 * We do this by keeping a floating proportion between BDIs, based on page
 * writeback completions [end_page_writeback()]. Those devices that write out
 * pages fastest will get the larger share, while the slower will get a smaller
 * share.
 *
 * We use page writeout completions because we are interested in getting rid of
 * dirty pages. Having them written out is the primary goal.
 *
 * We introduce a concept of time, a period over which we measure these events,
 * because demand can/will vary over time. The length of this period itself is
 * measured in page writeback completions.
 *
 */
static struct prop_descriptor vm_completions;
static struct prop_descriptor vm_dirties;

/*
 * couple the period to the dirty_ratio:
 *
 *   period/2 ~ roundup_pow_of_two(dirty limit)
 */
static int calc_period_shift(void)
{
	unsigned long dirty_total;

	if (vm_dirty_bytes)
		dirty_total = vm_dirty_bytes / PAGE_SIZE;
	else
		dirty_total = (vm_dirty_ratio * determine_dirtyable_memory()) /
				100;
	return ilog2(dirty_total - 1);
}

/*
 * update the period when the dirty threshold changes.
 */
static void update_completion_period(void)
{
	int shift = calc_period_shift();
	prop_change_shift(&vm_completions, shift);
	prop_change_shift(&vm_dirties, shift);
}

int dirty_background_ratio_handler(struct ctl_table *table, int write,
		void __user *buffer, size_t *lenp,
		loff_t *ppos)
{
	int ret;

	ret = proc_dointvec_minmax(table, write, buffer, lenp, ppos);
	if (ret == 0 && write)
		dirty_background_bytes = 0;
	return ret;
}

int dirty_background_bytes_handler(struct ctl_table *table, int write,
		void __user *buffer, size_t *lenp,
		loff_t *ppos)
{
	int ret;

	ret = proc_doulongvec_minmax(table, write, buffer, lenp, ppos);
	if (ret == 0 && write)
		dirty_background_ratio = 0;
	return ret;
}

int dirty_ratio_handler(struct ctl_table *table, int write,
		void __user *buffer, size_t *lenp,
		loff_t *ppos)
{
	int old_ratio = vm_dirty_ratio;
	int ret;

	ret = proc_dointvec_minmax(table, write, buffer, lenp, ppos);
	if (ret == 0 && write && vm_dirty_ratio != old_ratio) {
		update_completion_period();
		vm_dirty_bytes = 0;
	}
	return ret;
}


int dirty_bytes_handler(struct ctl_table *table, int write,
		void __user *buffer, size_t *lenp,
		loff_t *ppos)
{
	unsigned long old_bytes = vm_dirty_bytes;
	int ret;

	ret = proc_doulongvec_minmax(table, write, buffer, lenp, ppos);
	if (ret == 0 && write && vm_dirty_bytes != old_bytes) {
		update_completion_period();
		vm_dirty_ratio = 0;
	}
	return ret;
}

/*
 * Increment the BDI's writeout completion count and the global writeout
 * completion count. Called from test_clear_page_writeback().
 */
static inline void __bdi_writeout_inc(struct backing_dev_info *bdi)
{
	__inc_bdi_stat(bdi, BDI_WRITTEN);
	__prop_inc_percpu_max(&vm_completions, &bdi->completions,
			      bdi->max_prop_frac);
}

void bdi_writeout_inc(struct backing_dev_info *bdi)
{
	unsigned long flags;

	local_irq_save(flags);
	__bdi_writeout_inc(bdi);
	local_irq_restore(flags);
}
EXPORT_SYMBOL_GPL(bdi_writeout_inc);

void task_dirty_inc(struct task_struct *tsk)
{
	prop_inc_single(&vm_dirties, &tsk->dirties);
}

/*
 * Obtain an accurate fraction of the BDI's portion.
 */
void bdi_writeout_fraction(struct backing_dev_info *bdi,
		long *numerator, long *denominator)
{
	prop_fraction_percpu(&vm_completions, &bdi->completions,
				numerator, denominator);
}

void task_dirties_fraction(struct task_struct *tsk,
		long *numerator, long *denominator)
{
	prop_fraction_single(&vm_dirties, &tsk->dirties,
				numerator, denominator);
}

/*
 *
 */
static unsigned int bdi_min_ratio;

int bdi_set_min_ratio(struct backing_dev_info *bdi, unsigned int min_ratio)
{
	int ret = 0;

	spin_lock_bh(&bdi_lock);
	if (min_ratio > bdi->max_ratio) {
		ret = -EINVAL;
	} else {
		min_ratio -= bdi->min_ratio;
		if (bdi_min_ratio + min_ratio < 100) {
			bdi_min_ratio += min_ratio;
			bdi->min_ratio += min_ratio;
		} else {
			ret = -EINVAL;
		}
	}
	spin_unlock_bh(&bdi_lock);

	return ret;
}

int bdi_set_max_ratio(struct backing_dev_info *bdi, unsigned max_ratio)
{
	int ret = 0;

	if (max_ratio > 100)
		return -EINVAL;

	spin_lock_bh(&bdi_lock);
	if (bdi->min_ratio > max_ratio) {
		ret = -EINVAL;
	} else {
		bdi->max_ratio = max_ratio;
		bdi->max_prop_frac = (PROP_FRAC_BASE * max_ratio) / 100;
	}
	spin_unlock_bh(&bdi_lock);

	return ret;
}
EXPORT_SYMBOL(bdi_set_max_ratio);

/*
 * Work out the current dirty-memory clamping and background writeout
 * thresholds.
 *
 * The main aim here is to lower them aggressively if there is a lot of mapped
 * memory around.  To avoid stressing page reclaim with lots of unreclaimable
 * pages.  It is better to clamp down on writers than to start swapping, and
 * performing lots of scanning.
 *
 * We only allow 1/2 of the currently-unmapped memory to be dirtied.
 *
 * We don't permit the clamping level to fall below 5% - that is getting rather
 * excessive.
 *
 * We make sure that the background writeout level is below the adjusted
 * clamping level.
 */

static unsigned long highmem_dirtyable_memory(unsigned long total)
{
#ifdef CONFIG_HIGHMEM
	int node;
	unsigned long x = 0;

	for_each_node_state(node, N_HIGH_MEMORY) {
		struct zone *z =
			&NODE_DATA(node)->node_zones[ZONE_HIGHMEM];

		x += zone_page_state(z, NR_FREE_PAGES) +
		     zone_reclaimable_pages(z);
	}
	/*
	 * Make sure that the number of highmem pages is never larger
	 * than the number of the total dirtyable memory. This can only
	 * occur in very strange VM situations but we want to make sure
	 * that this does not occur.
	 */
	return min(x, total);
#else
	return 0;
#endif
}

/**
 * determine_dirtyable_memory - amount of memory that may be used
 *
 * Returns the numebr of pages that can currently be freed and used
 * by the kernel for direct mappings.
 */
unsigned long determine_dirtyable_memory(void)
{
	unsigned long x;

	x = global_page_state(NR_FREE_PAGES) + global_reclaimable_pages();

	if (!vm_highmem_is_dirtyable)
		x -= highmem_dirtyable_memory(x);

	return x + 1;	/* Ensure that we never return 0 */
}

/*
 * global_dirty_limits - background-writeback and dirty-throttling thresholds
 *
 * Calculate the dirty thresholds based on sysctl parameters
 * - vm.dirty_background_ratio  or  vm.dirty_background_bytes
 * - vm.dirty_ratio             or  vm.dirty_bytes
 */
void global_dirty_limits(unsigned long *pbackground, unsigned long *pdirty)
{
	unsigned long background;
	unsigned long dirty;
	unsigned long uninitialized_var(available_memory);
	struct task_struct *tsk;

	if (!vm_dirty_bytes || !dirty_background_bytes)
		available_memory = determine_dirtyable_memory();

	if (vm_dirty_bytes)
		dirty = DIV_ROUND_UP(vm_dirty_bytes, PAGE_SIZE);
	else
		dirty = (vm_dirty_ratio * available_memory) / 100;

	if (dirty_background_bytes)
		background = DIV_ROUND_UP(dirty_background_bytes, PAGE_SIZE);
	else
		background = (dirty_background_ratio * available_memory) / 100;

	/*
	 * Ensure at least 1/4 gap between background and dirty thresholds, so
	 * that when dirty throttling starts at (background + dirty)/2, it's
	 * below or at the entrance of the soft dirty throttle scope.
	 */
	if (background > dirty - dirty / (DIRTY_SCOPE / 2))
		background = dirty - dirty / (DIRTY_SCOPE / 2);

	tsk = current;
	*pbackground = background;
	*pdirty = dirty;
	trace_global_dirty_state(background, dirty);
}
EXPORT_SYMBOL_GPL(global_dirty_limits);

/**
 * bdi_dirty_limit - @bdi's share of dirty throttling threshold
 * @bdi: the backing_dev_info to query
 * @dirty: global dirty limit in pages
 *
 * Returns @bdi's dirty limit in pages. The term "dirty" in the context of
 * dirty balancing includes all PG_dirty, PG_writeback and NFS unstable pages.
 * And the "limit" in the name is not seriously taken as hard limit in
 * balance_dirty_pages().
 *
 * It allocates high/low dirty limits to fast/slow devices, in order to prevent
 * - starving fast devices
 * - piling up dirty pages (that will take long time to sync) on slow devices
 *
 * The bdi's share of dirty limit will be adapting to its throughput and
 * bounded by the bdi->min_ratio and/or bdi->max_ratio parameters, if set.
 */
unsigned long bdi_dirty_limit(struct backing_dev_info *bdi, unsigned long dirty)
{
	u64 bdi_dirty;
	long numerator, denominator;

	/*
	 * Calculate this BDI's share of the dirty ratio.
	 */
	bdi_writeout_fraction(bdi, &numerator, &denominator);

	bdi_dirty = (dirty * (100 - bdi_min_ratio)) / 100;
	bdi_dirty *= numerator;
	do_div(bdi_dirty, denominator);

	bdi_dirty += (dirty * bdi->min_ratio) / 100;
	if (bdi_dirty > (dirty * bdi->max_ratio) / 100)
		bdi_dirty = dirty * bdi->max_ratio / 100;

	return bdi_dirty;
}

/*
 * If we can dirty N more pages globally, honour N/8 to the bdi that runs low,
 * so as to help it ramp up.
 *
 * It helps the chicken and egg problem: when bdi A (eg. /pub) is heavy dirtied
 * and bdi B (eg. /) is light dirtied hence has 0 dirty limit, tasks writing to
 * B always get heavily throttled and bdi B's dirty limit might never be able
 * to grow up from 0.
 */
static unsigned long dirty_rampup_size(unsigned long dirty,
				       unsigned long thresh)
{
	if (thresh > dirty + MIN_WRITEBACK_PAGES)
		return min(MIN_WRITEBACK_PAGES * 2, (thresh - dirty) / 8);

	return MIN_WRITEBACK_PAGES / 8;
}

/*
 * After a task dirtied this many pages, balance_dirty_pages_ratelimited_nr()
 * will look to see if it needs to start dirty throttling.
 *
 * If ratelimit_pages is too low then big NUMA machines will call the expensive
 * global_page_state() too often. So scale it near-sqrt to the safety margin
 * (the number of pages we may dirty without exceeding the dirty limits).
 */
static unsigned long ratelimit_pages(unsigned long dirty,
				     unsigned long thresh)
{
	if (thresh > dirty)
		return 1UL << (ilog2(thresh - dirty) >> 1);

	return 1;
}

/*
 * last time exceeded (limit - limit/DIRTY_MARGIN)
 */
static bool dirty_exceeded_recently(struct backing_dev_info *bdi,
				    unsigned long time_window)
{
	return jiffies - bdi->dirty_exceed_time <= time_window;
}

/*
 * last time dropped below (thresh - 2*thresh/DIRTY_SCOPE + thresh/DIRTY_MARGIN)
 */
static bool dirty_free_run_recently(struct backing_dev_info *bdi,
				    unsigned long time_window)
{
	return jiffies - bdi->dirty_free_run <= time_window;
}

/*
 * Position based bandwidth control.
 *
 * (1) hard dirty limiting areas
 *
 * The block area is required to stop large number of slow dirtiers, because
 * the max pause area is only able to throttle a task at 1page/200ms=20KB/s.
 *
 * The max pause area is sufficient for normal workloads, and has the virtue
 * of bounded latency for light dirtiers.
 *
 * The brake area is typically enough to hold off the dirtiers as long as the
 * dirtyable memory is not so tight.
 *
 * The block area and max pause area are enforced inside the loop of
 * balance_dirty_pages(). Others can be found in dirty_throttle_bandwidth().
 *
 *         block area,  loop until drop below the area  -------------------|<===
 *     max pause area,  sleep(max_pause) and return     -----------|<=====>|
 *         brake area,  bw scaled from 1 down to 0      ---|<=====>|
 * --------------------------------------------------------o-------o-------o----
 *                                                         ^       ^       ^
 *                          limit - limit/DIRTY_MARGIN  ---'       |       |
 *                          limit                       -----------'       |
 *                          limit + limit/DIRTY_MARGIN  -------------------'
 *
 * (2) global control areas
 *
 * The rampup area is for ramping up the base bandwidth whereas the above brake
 * area is for scaling down the base bandwidth.
 *
 * The global thresh is typically equal to the above global limit. The
 * difference is, @thresh is real-time computed from global_dirty_limits() and
 * @limit is tracking @thresh at 100ms intervals in update_dirty_limit(). The
 * point is to track @thresh slowly if it dropped below the number of dirty
 * pages, so as to avoid unnecessarily entering the three areas in (1).
 *
 *rampup area                 setpoint/goal
 *|<=======>|                      v
 * |-------------------------------*-------------------------------|------------
 * ^                               ^                               ^
 * thresh - 2*thresh/DIRTY_SCOPE   thresh - thresh/DIRTY_SCOPE     thresh
 *
 * (3) bdi control areas
 *
 * The bdi reserve area tries to keep a reasonable number of dirty pages for
 * preventing block queue underrun.
 *
 * reserve area, scale up bw as dirty pages drop low  bdi_setpoint
 * |<=============================================>|       v
 * |-------------------------------------------------------*-------|----------
 * 0                    bdi_thresh - bdi_thresh/DIRTY_SCOPE^       ^bdi_thresh
 *
 * (4) global/bdi control lines
 *
 * dirty_throttle_bandwidth() applies 2 main and 3 regional control lines for
 * scaling up/down the base bandwidth based on the position of dirty pages.
 *
 * The two main control lines for the global/bdi control scopes do not end at
 * thresh/bdi_thresh.  They are centered at setpoint/bdi_setpoint and cover the
 * whole [0, limit].  If the control line drops below 0 before reaching @limit,
 * an auxiliary line will be setup to connect them. The below figure illustrates
 * the main bdi control line with an auxiliary line extending it to @limit.
 *
 * This allows smoothly throttling down bdi_dirty back to normal if it starts
 * high in situations like
 * - start writing to a slow SD card and a fast disk at the same time. The SD
 *   card's bdi_dirty may rush to 5 times higher than bdi_setpoint.
 * - the global/bdi dirty thresh/goal may be knocked down suddenly either on
 *   user request or on increased memory consumption.
 *
 *   o
 *     o
 *       o                                      [o] main control line
 *         o                                    [*] auxiliary control line
 *           o
 *             o
 *               o
 *                 o
 *                   o
 *                     o
 *                       o--------------------- balance point, bw scale = 1
 *                       | o
 *                       |   o
 *                       |     o
 *                       |       o
 *                       |         o
 *                       |           o
 *                       |             o------- connect point, bw scale = 1/2
 *                       |               .*
 *                       |                 .   *
 *                       |                   .      *
 *                       |                     .         *
 *                       |                       .           *
 *                       |                         .              *
 *                       |                           .                 *
 *  [--------------------*-----------------------------.--------------------*]
 *  0                 bdi_setpoint                  bdi_origin           limit
 *
 * The bdi control line: if (bdi_origin < limit), an auxiliary control line (*)
 * will be setup to extend the main control line (o) to @limit.
 */
static unsigned long dirty_throttle_bandwidth(struct backing_dev_info *bdi,
					      unsigned long thresh,
					      unsigned long dirty,
					      unsigned long bdi_dirty,
					      struct task_struct *tsk)
{
	unsigned long limit = default_backing_dev_info.dirty_threshold;
	unsigned long bdi_thresh = bdi->dirty_threshold;
	unsigned long origin;
	unsigned long goal;
	unsigned long long span;
	unsigned long long bw;

	if (unlikely(dirty >= limit))
		return 0;

	/*
	 * global setpoint
	 */
	origin = 2 * thresh;
	goal = thresh - thresh / DIRTY_SCOPE;

	if (unlikely(origin < limit && dirty > (goal + origin) / 2)) {
		origin = limit;
		goal = (goal + origin) / 2;
		bw >>= 1;
	}
	bw = origin - dirty;
	bw <<= BASE_BW_SHIFT;
	do_div(bw, origin - goal + 1);

	/*
	 * brake area to prevent global dirty exceeding
	 */
	if (dirty > limit - limit / DIRTY_MARGIN) {
		bw *= limit - dirty;
		do_div(bw, limit / DIRTY_MARGIN + 1);
	}

	/*
	 * rampup area, immediately above the unthrottled free-run region.
	 * It's setup mainly to get an estimation of ref_bw for reliably
	 * ramping up the base bandwidth.
	 */
	dirty = default_backing_dev_info.avg_dirty;
	origin = thresh - thresh / (DIRTY_SCOPE/2) + thresh / DIRTY_MARGIN;
	if (dirty < origin) {
		span = (origin - dirty) * bw;
		do_div(span, thresh / (8 * DIRTY_MARGIN) + 1);
		bw += span;
	}

	/*
	 * bdi setpoint
	 */
	if (unlikely(bdi_thresh > thresh))
		bdi_thresh = thresh;
	goal = bdi_thresh - bdi_thresh / DIRTY_SCOPE;
	/*
	 * In JBOD case, bdi_thresh could fluctuate proportional to its own
	 * size. Otherwise the bdi write bandwidth is good for limiting the
	 * floating area, to compensate for the global control line being too
	 * flat in large memory systems.
	 */
	span = (u64) bdi_thresh * (thresh - bdi_thresh) +
		(2 * bdi->avg_bandwidth) * bdi_thresh;
	do_div(span, thresh + 1);
	origin = goal + 2 * span;

	dirty = bdi->avg_dirty;
	if (unlikely(dirty > goal + span)) {
		if (dirty > limit)
			return 0;
		if (origin < limit) {
			origin = limit;
			goal += span;
			bw >>= 1;
		}
	}
	bw *= origin - dirty;
	do_div(bw, origin - goal + 1);

	/*
	 * bdi reserve area, safeguard against bdi dirty underflow and disk idle
	 */
	origin = bdi_thresh - bdi_thresh / (DIRTY_SCOPE / 2);
	if (bdi_dirty < origin) {
		bw = bw * origin;
		do_div(bw, bdi_dirty | 1);
	}

	/*
	 * honour light dirtiers higher bandwidth:
	 *
	 *	bw *= sqrt(1 / task_dirty_weight);
	 */
	if (tsk) {
		unsigned long numerator, denominator;
		const unsigned long priority_base = 1024;
		unsigned long priority = priority_base;

		/*
		 * Double the bandwidth for PF_LESS_THROTTLE (ie. nfsd) and
		 * real-time tasks.
		 */
		if (tsk->flags & PF_LESS_THROTTLE || rt_task(tsk))
			priority *= 2;

		task_dirties_fraction(tsk, &numerator, &denominator);

		denominator <<= 10;
		denominator = denominator * priority / priority_base;
		bw *= int_sqrt(denominator / (numerator + 1)) *
					    priority / priority_base;
		bw >>= 5 + BASE_BW_SHIFT / 2;
		bw = (unsigned long)bw * bdi->throttle_bandwidth;
		bw >>= 2 * BASE_BW_SHIFT - BASE_BW_SHIFT / 2;

		/*
		 * The avg_bandwidth bound is necessary because
		 * bdi_update_throttle_bandwidth() blindly sets base bandwidth
		 * to avg_bandwidth for more stable estimation, when it
		 * believes the current task is the only dirtier.
		 */
		if (priority > priority_base)
			return min((unsigned long)bw, bdi->avg_bandwidth);
	}

	return bw;
}

static void bdi_update_dirty_smooth(struct backing_dev_info *bdi,
				    unsigned long dirty)
{
	unsigned long avg = bdi->avg_dirty;
	unsigned long old = bdi->old_dirty;

	if (unlikely(!avg)) {
		avg = dirty;
		goto update;
	}

	/*
	 * dirty pages are departing upwards, follow up
	 */
	if (avg < old && old <= dirty) {
		avg += (old - avg) >> 3;
		goto update;
	}

	/*
	 * dirty pages are departing downwards, follow down
	 */
	if (avg > old && old >= dirty) {
		avg -= (avg - old) >> 3;
		goto update;
	}

	/*
	 * This can filter out one half unnecessary updates when bdi_dirty is
	 * fluctuating around the balance point, and is most effective on XFS,
	 * whose pattern is
	 *                                                             .
	 *	[.] dirty	[-] avg                       .       .
	 *                                                   .       .
	 *              .         .         .         .     .       .
	 *      ---------------------------------------    .       .
	 *            .         .         .         .     .       .
	 *           .         .         .         .     .       .
	 *          .         .         .         .     .       .
	 *         .         .         .         .     .       .
	 *        .         .         .         .
	 *       .         .         .         .      (flucuated)
	 *      .         .         .         .
	 *     .         .         .         .
	 *
	 * @avg will remain flat at the cost of being biased towards high. In
	 * practice the error tend to be much smaller: thanks to more coarse
	 * grained fluctuations, @avg becomes the real average number for the
	 * last two rising lines of @dirty.
	 */
	goto out;

update:
	bdi->avg_dirty = avg;
out:
	bdi->old_dirty = dirty;
}

static void __bdi_update_write_bandwidth(struct backing_dev_info *bdi,
					 unsigned long elapsed,
					 unsigned long written)
{
	const unsigned long period = roundup_pow_of_two(3 * HZ);
	unsigned long avg = bdi->avg_bandwidth;
	unsigned long old = bdi->write_bandwidth;
	unsigned long cur;
	u64 bw;

	bw = written - bdi->written_stamp;
	bw *= HZ;
	if (unlikely(elapsed > period / 2)) {
		do_div(bw, elapsed);
		elapsed = period / 2;
		bw *= elapsed;
	}
	bw += (u64)bdi->write_bandwidth * (period - elapsed);
	cur = bw >> ilog2(period);
	bdi->write_bandwidth = cur;

	/*
	 * one more level of smoothing
	 */
	if (avg > old && old > cur)
		avg -= (avg - old) >> 5;

	if (avg < old && old < cur)
		avg += (old - avg) >> 5;

	bdi->avg_bandwidth = avg;
}

static void update_dirty_limit(unsigned long thresh,
			       unsigned long dirty)
{
	unsigned long limit = default_backing_dev_info.dirty_threshold;
	unsigned long min = dirty + limit / DIRTY_MARGIN;

	if (limit < thresh) {
		limit = thresh;
		goto out;
	}

	/* take care not to follow into the brake area */
	if (limit > thresh + thresh / (DIRTY_MARGIN * 8) &&
	    limit > min) {
		limit -= (limit - max(thresh, min)) >> 3;
		goto out;
	}

	return;
out:
	default_backing_dev_info.dirty_threshold = limit;
}

static void bdi_update_dirty_threshold(struct backing_dev_info *bdi,
				       unsigned long thresh,
				       unsigned long dirty)
{
	unsigned long old = bdi->old_dirty_threshold;
	unsigned long avg = bdi->dirty_threshold;
	unsigned long min;

	min = dirty_rampup_size(dirty, thresh);
	thresh = bdi_dirty_limit(bdi, thresh);

	if (avg > old && old >= thresh)
		avg -= (avg - old) >> 4;

	if (avg < old && old <= thresh)
		avg += (old - avg) >> 4;

	bdi->dirty_threshold = max(avg, min);
	bdi->old_dirty_threshold = thresh;
}

/*
 * ref_bw typically fluctuates within a small range, with large isolated points
 * from time to time. The smoothed reference_bandwidth can effectively filter
 * out 1 such standalone point. When there comes 2+ isolated points together --
 * observed in ext4 on sudden redirty -- reference_bandwidth may surge high and
 * take long time to return to normal, which can mostly be counteracted by
 * xref_bw and other update restrictions in bdi_update_throttle_bandwidth().
 */
static void bdi_update_reference_bandwidth(struct backing_dev_info *bdi,
					   unsigned long ref_bw)
{
	unsigned long old = bdi->old_ref_bandwidth;
	unsigned long avg = bdi->reference_bandwidth;

	if (avg > old && old >= ref_bw && avg - old >= old - ref_bw)
		avg -= (avg - old) >> 3;

	if (avg < old && old <= ref_bw && old - avg >= ref_bw - old)
		avg += (old - avg) >> 3;

	bdi->reference_bandwidth = avg;
	bdi->old_ref_bandwidth = ref_bw;
}

/*
 * Base throttle bandwidth.
 */
static void bdi_update_throttle_bandwidth(struct backing_dev_info *bdi,
					  unsigned long thresh,
					  unsigned long dirty,
					  unsigned long bdi_dirty,
					  unsigned long dirtied,
					  unsigned long elapsed)
{
	unsigned long limit = default_backing_dev_info.dirty_threshold;
	unsigned long margin = limit / DIRTY_MARGIN;
	unsigned long goal = thresh - thresh / DIRTY_SCOPE;
	unsigned long bdi_thresh = bdi->dirty_threshold;
	unsigned long bdi_goal = bdi_thresh - bdi_thresh / DIRTY_SCOPE;
	unsigned long long bw = bdi->throttle_bandwidth;
	unsigned long long dirty_bw;
	unsigned long long pos_bw;
	unsigned long long delta;
	unsigned long long ref_bw = 0;
	unsigned long long xref_bw;
	unsigned long pos_ratio;
	unsigned long spread;

	if (dirty > limit - margin)
		bdi->dirty_exceed_time = jiffies;

	if (dirty < thresh - thresh / (DIRTY_SCOPE/2) + margin)
		bdi->dirty_free_run = jiffies;

	/*
	 * The dirty rate should match the writeback rate exactly, except when
	 * dirty pages are truncated before IO submission. The mismatches are
	 * hopefully small and hence ignored. So a continuous stream of dirty
	 * page trucates will result in errors in ref_bw, fortunately pos_bw
	 * can effectively stop the base bw from being driven away endlessly
	 * by the errors.
	 *
	 * It'd be nicer for the filesystems to not redirty too much pages
	 * either on IO or lock contention, or on sub-page writes.  ext4 is
	 * known to redirty pages in big bursts, leading to
	 *   - surges of dirty_bw, which can be mostly safeguarded by the
	 *     min/max'ed xref_bw
	 *   - the temporary drop of task weight and hence surge of task bw
	 * It could possibly be fixed in the FS.
	 */
	dirty_bw = (dirtied - bdi->dirtied_stamp) * HZ / elapsed;

	pos_ratio = dirty_throttle_bandwidth(bdi, thresh, dirty,
					     bdi_dirty, NULL);
	/*
	 * pos_bw = task_bw, assuming 100% task dirty weight
	 *
	 * (pos_bw > bw) means the position of the number of dirty pages is
	 * lower than the global and/or bdi setpoints. It does not necessarily
	 * mean the base throttle bandwidth is larger than its balanced value.
	 * The latter is likely only when
	 * - (position) the dirty pages are at some distance from the setpoint,
	 * - (speed) and either stands still or is departing from the setpoint.
	 */
	pos_bw = (bw >> (BASE_BW_SHIFT/2)) * pos_ratio >>
			(BASE_BW_SHIFT/2);

	/*
	 * A typical desktop has only 1 task writing to 1 disk, in which case
	 * the dirtier task should be throttled at the disk's write bandwidth.
	 * Note that we ignore minor dirty/writeback mismatches such as
	 * redirties and truncated dirty pages.
	 */
	if (bdi_thresh > thresh - thresh / 16) {
		unsigned long numerator, denominator;

		task_dirties_fraction(current, &numerator, &denominator);
		if (numerator > denominator - denominator / 16)
			ref_bw = bdi->avg_bandwidth << BASE_BW_SHIFT;
	}
	/*
	 * Otherwise there may be
	 * 1) N dd tasks writing to the current disk, or
	 * 2) X dd tasks and Y "rsync --bwlimit" tasks.
	 * The below estimation is accurate enough for (1). For (2), where not
	 * all task's dirty rate can be changed proportionally by adjusting the
	 * base throttle bandwidth, it would require multiple adjust-reestimate
	 * cycles to approach the rate matching point. Which is not a big
	 * concern as we always do small steps to approach the target. The
	 * un-controllable tasks may only slow down the progress.
	 */
	if (!ref_bw) {
		ref_bw = pos_ratio * bdi->avg_bandwidth;
		do_div(ref_bw, dirty_bw | 1);
		ref_bw = (bw >> (BASE_BW_SHIFT/2)) * (unsigned long)ref_bw >>
				(BASE_BW_SHIFT/2);
	}

	/*
	 * The average dirty pages typically fluctuates within this scope.
	 */
	spread = min(bdi->write_bandwidth / 8, bdi_thresh / DIRTY_MARGIN);

	/*
	 * Update the base throttle bandwidth rigidly: eg. only try lowering it
	 * when both the global/bdi dirty pages are away from their setpoints,
	 * and are either standing still or continue departing away.
	 *
	 * The "+ avg_dirty / 256" tricks mainly help btrfs, which behaves
	 * amazingly smoothly.  Its average dirty pages simply tracks more and
	 * more close to the number of dirty pages without any overshooting,
	 * thus its dirty pages may be ever moving towards the setpoint and
	 * @avg_dirty ever approaching @dirty, slower and slower, but very hard
	 * to cross it to trigger a base bandwidth update. What the trick does
	 * is "when @avg_dirty is _close enough_ to @dirty, it indicates slowed
	 * down @dirty change rate, hence the other inequalities are now a good
	 * indication of something unbalanced in the current bdi".
	 *
	 * In the cases of hitting the upper/lower margins, it's obviously
	 * necessary to adjust the (possibly very unbalanced) base bandwidth,
	 * unless the opposite margin was also been hit recently, which
	 * indicates that the dirty control scope may be smaller than the bdi
	 * write bandwidth and hence the dirty pages are quickly fluctuating
	 * between the upper/lower margins.
	 */
	if (bw < pos_bw) {
		if (dirty < goal &&
		    dirty <= default_backing_dev_info.avg_dirty +
			     (default_backing_dev_info.avg_dirty >> 8) &&
		    bdi->avg_dirty + spread < bdi_goal &&
		    bdi_dirty <= bdi->avg_dirty + (bdi->avg_dirty >> 8) &&
		    bdi_dirty <= bdi->old_dirty)
			goto adjust;
		if (dirty < thresh - thresh / (DIRTY_SCOPE/2) + margin &&
		    !dirty_exceeded_recently(bdi, HZ))
			goto adjust;
	}

	if (bw > pos_bw) {
		if (dirty > goal &&
		    dirty >= default_backing_dev_info.avg_dirty -
			     (default_backing_dev_info.avg_dirty >> 8) &&
		    bdi->avg_dirty > bdi_goal + spread &&
		    bdi_dirty >= bdi->avg_dirty - (bdi->avg_dirty >> 8) &&
		    bdi_dirty >= bdi->old_dirty)
			goto adjust;
		if (dirty > limit - margin &&
		    !dirty_free_run_recently(bdi, HZ))
			goto adjust;
	}

	goto out;

adjust:
	/*
	 * The min/max'ed xref_bw is an effective safeguard. The most dangerous
	 * case that could unnecessarily disturb the base bandwith is: when the
	 * control scope is roughly equal to the write bandwidth, the dirty
	 * pages may rush into the upper/lower margins regularly. It typically
	 * hits the upper margin in a blink, making a sudden drop of pos_bw and
	 * ref_bw. Assume 5 points A, b, c, D, E, where b, c have the dropped
	 * down number of pages, and A, D, E are at normal level.  At point b,
	 * the xref_bw will be the good A; at c, the xref_bw will be the
	 * dragged-down-by-b reference_bandwidth which is bad; at D and E, the
	 * still-low reference_bandwidth will no longer bring the base
	 * bandwidth down, as xref_bw will take the larger values from D and E.
	 */
	if (pos_bw > bw) {
		xref_bw = min(ref_bw, bdi->old_ref_bandwidth);
		xref_bw = min(xref_bw, bdi->reference_bandwidth);
		if (xref_bw > bw)
			delta = xref_bw - bw;
		else
			delta = 0;
	} else {
		xref_bw = max(ref_bw, bdi->reference_bandwidth);
		xref_bw = max(xref_bw, bdi->reference_bandwidth);
		if (xref_bw < bw)
			delta = bw - xref_bw;
		else
			delta = 0;
	}

	/*
	 * Don't pursue 100% rate matching. It's impossible since the balanced
	 * rate itself is constantly fluctuating. So decrease the track speed
	 * when it gets close to the target. Also limit the step size in
	 * various ways to avoid overshooting.
	 */
	{
		unsigned long long bw1 = bw;
		do_div(bw1, 2 * delta + 1);
		delta >>= bw1;
	}
	delta = min(delta, (u64)abs64(pos_bw - bw));
	delta >>= 1;
	delta = min(delta, bw >> 3);

	if (pos_bw > bw)
		bw += delta;
	else
		bw -= delta;

	bdi->throttle_bandwidth = bw;
out:
	bdi_update_reference_bandwidth(bdi, ref_bw);
	trace_dirty_throttle_bandwidth(bdi, dirty_bw, pos_bw, ref_bw);
}

void bdi_update_bandwidth(struct backing_dev_info *bdi,
			  unsigned long thresh,
			  unsigned long dirty,
			  unsigned long bdi_dirty,
			  unsigned long start_time)
{
	static DEFINE_SPINLOCK(dirty_lock);
	unsigned long now = jiffies;
	unsigned long elapsed;
	unsigned long dirtied;
	unsigned long written;

	if (!spin_trylock(&dirty_lock))
		return;

	elapsed = now - bdi->bw_time_stamp;
	dirtied = percpu_counter_read(&bdi->bdi_stat[BDI_DIRTIED]);
	written = percpu_counter_read(&bdi->bdi_stat[BDI_WRITTEN]);

	/* skip quiet periods when disk bandwidth is under-utilized */
	if (elapsed > HZ/2 &&
	    elapsed > now - start_time)
		goto snapshot;

	/*
	 * rate-limit, only update once every 100ms. Demand higher threshold
	 * on the flusher so that the throttled task(s) can do most updates.
	 */
	if (!thresh && elapsed <= HZ/4)
		goto unlock;
	if (elapsed <= HZ/10)
		goto unlock;

	if (thresh) {
		update_dirty_limit(thresh, dirty);
		bdi_update_dirty_threshold(bdi, thresh, dirty);
		bdi_update_throttle_bandwidth(bdi, thresh, dirty,
					      bdi_dirty, dirtied, elapsed);
	}
	__bdi_update_write_bandwidth(bdi, elapsed, written);
	if (thresh) {
		bdi_update_dirty_smooth(bdi, bdi_dirty);
		bdi_update_dirty_smooth(&default_backing_dev_info, dirty);
	}

snapshot:
	bdi->dirtied_stamp = dirtied;
	bdi->written_stamp = written;
	bdi->bw_time_stamp = now;
unlock:
	spin_unlock(&dirty_lock);
}

/*
 * Limit pause time for small memory systems. If sleeping for too long time,
 * the small pool of dirty/writeback pages may go empty and disk go idle.
 */
static unsigned long max_pause(struct backing_dev_info *bdi,
			       unsigned long bdi_dirty)
{
	unsigned long t;  /* jiffies */

	/* 1ms for every 1MB; may further consider bdi bandwidth */
	t = bdi_dirty >> (30 - PAGE_CACHE_SHIFT - ilog2(HZ));
	t += 2;

	return min_t(unsigned long, t, MAX_PAUSE);
}

/*
 * Scale up pause time for concurrent dirtiers in order to reduce CPU overheads.
 * But ensure reasonably large [min_pause, max_pause] range size, so that
 * nr_dirtied_pause (and hence future pause time) can stay reasonably stable.
 */
static unsigned long min_pause(struct backing_dev_info *bdi,
			       unsigned long max)
{
	unsigned long hi = ilog2(bdi->write_bandwidth);
	unsigned long lo = ilog2(bdi->throttle_bandwidth) - BASE_BW_SHIFT;
	unsigned long t = 1 + max / 8;  /* jiffies */

	if (lo >= hi)
		return t;

	/* (N * 10ms) on 2^N concurrent tasks */
	t += (hi - lo) * (10 * HZ) / 1024;

	return min(t, max / 2);
}

/*
 * balance_dirty_pages() must be called by processes which are generating dirty
 * data.  It looks at the number of dirty pages in the machine and will force
 * the caller to perform writeback if the system is over `vm_dirty_ratio'.
 * If we're over `background_thresh' then the writeback threads are woken to
 * perform some writeout.
 */
static void balance_dirty_pages(struct address_space *mapping,
				unsigned long pages_dirtied)
{
	unsigned long nr_reclaimable;
	unsigned long nr_dirty;
	unsigned long bdi_dirty;  /* = file_dirty + writeback + unstable_nfs */
	unsigned long background_thresh;
	unsigned long dirty_thresh;
	unsigned long bw;
	unsigned long period;
	unsigned long pause = 0;
	unsigned long pause_max;
	struct backing_dev_info *bdi = mapping->backing_dev_info;
	unsigned long start_time = jiffies;

	for (;;) {
		/*
		 * Unstable writes are a feature of certain networked
		 * filesystems (i.e. NFS) in which data may have been
		 * written to the server's write cache, but has not yet
		 * been flushed to permanent storage.
		 */
		nr_reclaimable = global_page_state(NR_FILE_DIRTY) +
					global_page_state(NR_UNSTABLE_NFS);
		nr_dirty = nr_reclaimable + global_page_state(NR_WRITEBACK);

		global_dirty_limits(&background_thresh, &dirty_thresh);

		/*
		 * In order to avoid the stacked BDI deadlock we need
		 * to ensure we accurately count the 'dirty' pages when
		 * the threshold is low.
		 *
		 * Otherwise it would be possible to get thresh+n pages
		 * reported dirty, even though there are thresh-m pages
		 * actually dirty; with m+n sitting in the percpu
		 * deltas.
		 */
		if (bdi->dirty_threshold < 2*bdi_stat_error(bdi)) {
			bdi_dirty = bdi_stat_sum(bdi, BDI_RECLAIMABLE) +
				    bdi_stat_sum(bdi, BDI_WRITEBACK);
		} else {
			bdi_dirty = bdi_stat(bdi, BDI_RECLAIMABLE) +
				    bdi_stat(bdi, BDI_WRITEBACK);
		}

		/*
		 * Throttle it only when the background writeback cannot
		 * catch-up. This avoids (excessively) small writeouts
		 * when the bdi limits are ramping up.
		 */
		if (nr_dirty <= (background_thresh + dirty_thresh) / 2) {
			current->paused_when = jiffies;
			current->nr_dirtied = 0;
			break;
		}

		bdi_update_bandwidth(bdi, dirty_thresh, nr_dirty,
				     bdi_dirty, start_time);

		if (unlikely(!writeback_in_progress(bdi)))
			bdi_start_background_writeback(bdi);

		pause_max = max_pause(bdi, bdi_dirty);

		bw = dirty_throttle_bandwidth(bdi, dirty_thresh, nr_dirty,
					      bdi_dirty, current);
		if (unlikely(bw == 0)) {
			period = pause_max;
			pause = pause_max;
			goto pause;
		}
		period = (HZ * pages_dirtied + bw / 2) / bw;
		pause = current->paused_when + period - jiffies;
		/*
		 * Take it as long think time if pause falls into (-10s, 0).
		 * If it's less than 500ms (ext2 blocks the dirtier task for
		 * up to 400ms from time to time on 1-HDD; so does xfs, however
		 * at much less frequency), try to compensate it in future by
		 * updating the virtual time; otherwise just reset the time, as
		 * it may be a light dirtier.
		 */
		if (unlikely(-pause < HZ*10)) {
			trace_balance_dirty_pages(bdi,
						  dirty_thresh,
						  nr_dirty,
						  bdi_dirty,
						  bw,
						  pages_dirtied,
						  period,
						  pause,
						  start_time);
			if (-pause > HZ/2) {
				current->paused_when = jiffies;
				current->nr_dirtied = 0;
				pause = 0;
			} else if (period) {
				current->paused_when += period;
				current->nr_dirtied = 0;
				pause = 1;
			} else
				current->nr_dirtied_pause <<= 1;
			break;
		}
		if (pause > pause_max)
			pause = pause_max;

pause:
		trace_balance_dirty_pages(bdi,
					  dirty_thresh,
					  nr_dirty,
					  bdi_dirty,
					  bw,
					  pages_dirtied,
					  period,
					  pause,
					  start_time);
		current->paused_when = jiffies;
		__set_current_state(TASK_UNINTERRUPTIBLE);
		io_schedule_timeout(pause);
		current->paused_when += pause;
		current->nr_dirtied = 0;

		if (nr_dirty < default_backing_dev_info.dirty_threshold +
		    default_backing_dev_info.dirty_threshold / DIRTY_MARGIN)
			break;
	}

	if (pause == 0)
		current->nr_dirtied_pause =
				ratelimit_pages(nr_dirty, dirty_thresh);
	else if (pause <= min_pause(bdi, pause_max))
		current->nr_dirtied_pause += current->nr_dirtied_pause / 32 + 1;
	else if (pause >= pause_max)
		/*
		 * when repeated, writing 1 page per 100ms on slow devices,
		 * i-(i+2)/4 will be able to reach 1 but never reduce to 0.
		 */
		current->nr_dirtied_pause -= (current->nr_dirtied_pause+2) >> 2;

	if (writeback_in_progress(bdi))
		return;

	/*
	 * In laptop mode, we wait until hitting the higher threshold before
	 * starting background writeout, and then write out all the way down
	 * to the lower threshold.  So slow writers cause minimal disk activity.
	 *
	 * In normal mode, we start background writeout at the lower
	 * background_thresh, to keep the amount of dirty memory low.
	 */
	if (laptop_mode)
		return;

	if (nr_reclaimable > background_thresh)
		bdi_start_background_writeback(bdi);
}

void set_page_dirty_balance(struct page *page, int page_mkwrite)
{
	if (set_page_dirty(page) || page_mkwrite) {
		struct address_space *mapping = page_mapping(page);

		if (mapping)
			balance_dirty_pages_ratelimited(mapping);
	}
}

/**
 * balance_dirty_pages_ratelimited_nr - balance dirty memory state
 * @mapping: address_space which was dirtied
 * @nr_pages_dirtied: number of pages which the caller has just dirtied
 *
 * Processes which are dirtying memory should call in here once for each page
 * which was newly dirtied.  The function will periodically check the system's
 * dirty state and will initiate writeback if needed.
 *
 * On really big machines, global_page_state() is expensive, so try to avoid
 * calling it too often (ratelimiting).  But once we're over the dirty memory
 * limit we disable the ratelimiting, to prevent individual processes from
 * overshooting the limit by (ratelimit_pages) each.
 */
void balance_dirty_pages_ratelimited_nr(struct address_space *mapping,
					unsigned long nr_pages_dirtied)
{
	struct backing_dev_info *bdi = mapping->backing_dev_info;

	if (!bdi_cap_account_dirty(bdi))
		return;

	current->nr_dirtied += nr_pages_dirtied;

	if (dirty_exceeded_recently(bdi, MAX_PAUSE)) {
		unsigned long max = current->nr_dirtied +
						(128 >> (PAGE_SHIFT - 10));

		if (current->nr_dirtied_pause > max)
			current->nr_dirtied_pause = max;
	}

	/*
	 * Check the rate limiting. Also, we do not want to throttle real-time
	 * tasks in balance_dirty_pages(). Period.
	 */
	if (unlikely(current->nr_dirtied >= current->nr_dirtied_pause))
		balance_dirty_pages(mapping, current->nr_dirtied);
}
EXPORT_SYMBOL(balance_dirty_pages_ratelimited_nr);

void throttle_vm_writeout(gfp_t gfp_mask)
{
	unsigned long background_thresh;
	unsigned long dirty_thresh;

        for ( ; ; ) {
		global_dirty_limits(&background_thresh, &dirty_thresh);

                /*
                 * Boost the allowable dirty threshold a bit for page
                 * allocators so they don't get DoS'ed by heavy writers
                 */
                dirty_thresh += dirty_thresh / 10;      /* wheeee... */

                if (global_page_state(NR_UNSTABLE_NFS) +
			global_page_state(NR_WRITEBACK) <= dirty_thresh)
                        	break;
                congestion_wait(BLK_RW_ASYNC, HZ/10);

		/*
		 * The caller might hold locks which can prevent IO completion
		 * or progress in the filesystem.  So we cannot just sit here
		 * waiting for IO to complete.
		 */
		if ((gfp_mask & (__GFP_FS|__GFP_IO)) != (__GFP_FS|__GFP_IO))
			break;
        }
}

/*
 * sysctl handler for /proc/sys/vm/dirty_writeback_centisecs
 */
int dirty_writeback_centisecs_handler(ctl_table *table, int write,
	void __user *buffer, size_t *length, loff_t *ppos)
{
	proc_dointvec(table, write, buffer, length, ppos);
	bdi_arm_supers_timer();
	return 0;
}

#ifdef CONFIG_BLOCK
void laptop_mode_timer_fn(unsigned long data)
{
	struct request_queue *q = (struct request_queue *)data;
	int nr_pages = global_page_state(NR_FILE_DIRTY) +
		global_page_state(NR_UNSTABLE_NFS);

	/*
	 * We want to write everything out, not just down to the dirty
	 * threshold
	 */
	if (bdi_has_dirty_io(&q->backing_dev_info))
		bdi_start_writeback(&q->backing_dev_info, nr_pages);
}

/*
 * We've spun up the disk and we're in laptop mode: schedule writeback
 * of all dirty data a few seconds from now.  If the flush is already scheduled
 * then push it back - the user is still using the disk.
 */
void laptop_io_completion(struct backing_dev_info *info)
{
	mod_timer(&info->laptop_mode_wb_timer, jiffies + laptop_mode);
}

/*
 * We're in laptop mode and we've just synced. The sync's writes will have
 * caused another writeback to be scheduled by laptop_io_completion.
 * Nothing needs to be written back anymore, so we unschedule the writeback.
 */
void laptop_sync_completion(void)
{
	struct backing_dev_info *bdi;

	rcu_read_lock();

	list_for_each_entry_rcu(bdi, &bdi_list, bdi_list)
		del_timer(&bdi->laptop_mode_wb_timer);

	rcu_read_unlock();
}
#endif

/*
 * Called early on to tune the page writeback dirty limits.
 *
 * We used to scale dirty pages according to how total memory
 * related to pages that could be allocated for buffers (by
 * comparing nr_free_buffer_pages() to vm_total_pages.
 *
 * However, that was when we used "dirty_ratio" to scale with
 * all memory, and we don't do that any more. "dirty_ratio"
 * is now applied to total non-HIGHPAGE memory (by subtracting
 * totalhigh_pages from vm_total_pages), and as such we can't
 * get into the old insane situation any more where we had
 * large amounts of dirty pages compared to a small amount of
 * non-HIGHMEM memory.
 *
 * But we might still want to scale the dirty_ratio by how
 * much memory the box has..
 */
void __init page_writeback_init(void)
{
	int shift;

	shift = calc_period_shift();
	prop_descriptor_init(&vm_completions, shift);
	prop_descriptor_init(&vm_dirties, shift);
}

/**
 * tag_pages_for_writeback - tag pages to be written by write_cache_pages
 * @mapping: address space structure to write
 * @start: starting page index
 * @end: ending page index (inclusive)
 *
 * This function scans the page range from @start to @end (inclusive) and tags
 * all pages that have DIRTY tag set with a special TOWRITE tag. The idea is
 * that write_cache_pages (or whoever calls this function) will then use
 * TOWRITE tag to identify pages eligible for writeback.  This mechanism is
 * used to avoid livelocking of writeback by a process steadily creating new
 * dirty pages in the file (thus it is important for this function to be quick
 * so that it can tag pages faster than a dirtying process can create them).
 */
/*
 * We tag pages in batches of WRITEBACK_TAG_BATCH to reduce tree_lock latency.
 */
void tag_pages_for_writeback(struct address_space *mapping,
			     pgoff_t start, pgoff_t end)
{
#define WRITEBACK_TAG_BATCH 4096
	unsigned long tagged;

	do {
		spin_lock_irq(&mapping->tree_lock);
		tagged = radix_tree_range_tag_if_tagged(&mapping->page_tree,
				&start, end, WRITEBACK_TAG_BATCH,
				PAGECACHE_TAG_DIRTY, PAGECACHE_TAG_TOWRITE);
		spin_unlock_irq(&mapping->tree_lock);
		WARN_ON_ONCE(tagged > WRITEBACK_TAG_BATCH);
		cond_resched();
		/* We check 'start' to handle wrapping when end == ~0UL */
	} while (tagged >= WRITEBACK_TAG_BATCH && start);
}
EXPORT_SYMBOL(tag_pages_for_writeback);

/**
 * write_cache_pages - walk the list of dirty pages of the given address space and write all of them.
 * @mapping: address space structure to write
 * @wbc: subtract the number of written pages from *@wbc->nr_to_write
 * @writepage: function called for each page
 * @data: data passed to writepage function
 *
 * If a page is already under I/O, write_cache_pages() skips it, even
 * if it's dirty.  This is desirable behaviour for memory-cleaning writeback,
 * but it is INCORRECT for data-integrity system calls such as fsync().  fsync()
 * and msync() need to guarantee that all the data which was dirty at the time
 * the call was made get new I/O started against them.  If wbc->sync_mode is
 * WB_SYNC_ALL then we were called for data integrity and we must wait for
 * existing IO to complete.
 *
 * To avoid livelocks (when other process dirties new pages), we first tag
 * pages which should be written back with TOWRITE tag and only then start
 * writing them. For data-integrity sync we have to be careful so that we do
 * not miss some pages (e.g., because some other process has cleared TOWRITE
 * tag we set). The rule we follow is that TOWRITE tag can be cleared only
 * by the process clearing the DIRTY tag (and submitting the page for IO).
 */
int write_cache_pages(struct address_space *mapping,
		      struct writeback_control *wbc, writepage_t writepage,
		      void *data)
{
	int ret = 0;
	int done = 0;
	struct pagevec pvec;
	int nr_pages;
	pgoff_t uninitialized_var(writeback_index);
	pgoff_t index;
	pgoff_t end;		/* Inclusive */
	pgoff_t done_index;
	int cycled;
	int range_whole = 0;
	int tag;

	pagevec_init(&pvec, 0);
	if (wbc->range_cyclic) {
		writeback_index = mapping->writeback_index; /* prev offset */
		index = writeback_index;
		if (index == 0)
			cycled = 1;
		else
			cycled = 0;
		end = -1;
	} else {
		index = wbc->range_start >> PAGE_CACHE_SHIFT;
		end = wbc->range_end >> PAGE_CACHE_SHIFT;
		if (wbc->range_start == 0 && wbc->range_end == LLONG_MAX)
			range_whole = 1;
		cycled = 1; /* ignore range_cyclic tests */
	}
	if (wbc->sync_mode == WB_SYNC_ALL)
		tag = PAGECACHE_TAG_TOWRITE;
	else
		tag = PAGECACHE_TAG_DIRTY;
retry:
	if (wbc->sync_mode == WB_SYNC_ALL)
		tag_pages_for_writeback(mapping, index, end);
	done_index = index;
	while (!done && (index <= end)) {
		int i;

		nr_pages = pagevec_lookup_tag(&pvec, mapping, &index, tag,
			      min(end - index, (pgoff_t)PAGEVEC_SIZE-1) + 1);
		if (nr_pages == 0)
			break;

		for (i = 0; i < nr_pages; i++) {
			struct page *page = pvec.pages[i];

			/*
			 * At this point, the page may be truncated or
			 * invalidated (changing page->mapping to NULL), or
			 * even swizzled back from swapper_space to tmpfs file
			 * mapping. However, page->index will not change
			 * because we have a reference on the page.
			 */
			if (page->index > end) {
				/*
				 * can't be range_cyclic (1st pass) because
				 * end == -1 in that case.
				 */
				done = 1;
				break;
			}

			done_index = page->index + 1;

			lock_page(page);

			/*
			 * Page truncated or invalidated. We can freely skip it
			 * then, even for data integrity operations: the page
			 * has disappeared concurrently, so there could be no
			 * real expectation of this data interity operation
			 * even if there is now a new, dirty page at the same
			 * pagecache address.
			 */
			if (unlikely(page->mapping != mapping)) {
continue_unlock:
				unlock_page(page);
				continue;
			}

			if (!PageDirty(page)) {
				/* someone wrote it for us */
				goto continue_unlock;
			}

			if (PageWriteback(page)) {
				if (wbc->sync_mode != WB_SYNC_NONE)
					wait_on_page_writeback(page);
				else
					goto continue_unlock;
			}

			BUG_ON(PageWriteback(page));
			if (!clear_page_dirty_for_io(page))
				goto continue_unlock;

			trace_wbc_writepage(wbc, mapping->backing_dev_info);
			ret = (*writepage)(page, wbc, data);
			if (unlikely(ret)) {
				if (ret == AOP_WRITEPAGE_ACTIVATE) {
					unlock_page(page);
					ret = 0;
				} else {
					/*
					 * done_index is set past this page,
					 * so media errors will not choke
					 * background writeout for the entire
					 * file. This has consequences for
					 * range_cyclic semantics (ie. it may
					 * not be suitable for data integrity
					 * writeout).
					 */
					done = 1;
					break;
				}
			}

			/*
			 * We stop writing back only if we are not doing
			 * integrity sync. In case of integrity sync we have to
			 * keep going until we have written all the pages
			 * we tagged for writeback prior to entering this loop.
			 */
			if (--wbc->nr_to_write <= 0 &&
			    wbc->sync_mode == WB_SYNC_NONE) {
				done = 1;
				break;
			}
		}
		pagevec_release(&pvec);
		cond_resched();
	}
	if (!cycled && !done) {
		/*
		 * range_cyclic:
		 * We hit the last page and there is more work to be done: wrap
		 * back to the start of the file
		 */
		cycled = 1;
		index = 0;
		end = writeback_index - 1;
		goto retry;
	}
	if (wbc->range_cyclic || (range_whole && wbc->nr_to_write > 0))
		mapping->writeback_index = done_index;

	return ret;
}
EXPORT_SYMBOL(write_cache_pages);

/*
 * Function used by generic_writepages to call the real writepage
 * function and set the mapping flags on error
 */
static int __writepage(struct page *page, struct writeback_control *wbc,
		       void *data)
{
	struct address_space *mapping = data;
	int ret = mapping->a_ops->writepage(page, wbc);
	mapping_set_error(mapping, ret);
	return ret;
}

/**
 * generic_writepages - walk the list of dirty pages of the given address space and writepage() all of them.
 * @mapping: address space structure to write
 * @wbc: subtract the number of written pages from *@wbc->nr_to_write
 *
 * This is a library function, which implements the writepages()
 * address_space_operation.
 */
int generic_writepages(struct address_space *mapping,
		       struct writeback_control *wbc)
{
	/* deal with chardevs and other special file */
	if (!mapping->a_ops->writepage)
		return 0;

	return write_cache_pages(mapping, wbc, __writepage, mapping);
}

EXPORT_SYMBOL(generic_writepages);

int do_writepages(struct address_space *mapping, struct writeback_control *wbc)
{
	int ret;

	if (wbc->nr_to_write <= 0)
		return 0;
	if (mapping->a_ops->writepages)
		ret = mapping->a_ops->writepages(mapping, wbc);
	else
		ret = generic_writepages(mapping, wbc);
	return ret;
}

/**
 * write_one_page - write out a single page and optionally wait on I/O
 * @page: the page to write
 * @wait: if true, wait on writeout
 *
 * The page must be locked by the caller and will be unlocked upon return.
 *
 * write_one_page() returns a negative error code if I/O failed.
 */
int write_one_page(struct page *page, int wait)
{
	struct address_space *mapping = page->mapping;
	int ret = 0;
	struct writeback_control wbc = {
		.sync_mode = WB_SYNC_ALL,
		.nr_to_write = 1,
	};

	BUG_ON(!PageLocked(page));

	if (wait)
		wait_on_page_writeback(page);

	if (clear_page_dirty_for_io(page)) {
		page_cache_get(page);
		ret = mapping->a_ops->writepage(page, &wbc);
		if (ret == 0 && wait) {
			wait_on_page_writeback(page);
			if (PageError(page))
				ret = -EIO;
		}
		page_cache_release(page);
	} else {
		unlock_page(page);
	}
	return ret;
}
EXPORT_SYMBOL(write_one_page);

/*
 * For address_spaces which do not use buffers nor write back.
 */
int __set_page_dirty_no_writeback(struct page *page)
{
	if (!PageDirty(page))
		return !TestSetPageDirty(page);
	return 0;
}

/*
 * Helper function for set_page_dirty family.
 * NOTE: This relies on being atomic wrt interrupts.
 */
void account_page_dirtied(struct page *page, struct address_space *mapping)
{
	if (mapping_cap_account_dirty(mapping)) {
		__inc_zone_page_state(page, NR_FILE_DIRTY);
		__inc_zone_page_state(page, NR_DIRTIED);
		__inc_bdi_stat(mapping->backing_dev_info, BDI_RECLAIMABLE);
		__inc_bdi_stat(mapping->backing_dev_info, BDI_DIRTIED);
		task_dirty_inc(current);
		task_io_account_write(PAGE_CACHE_SIZE);
	}
}
EXPORT_SYMBOL(account_page_dirtied);

/*
 * Helper function for set_page_writeback family.
 * NOTE: Unlike account_page_dirtied this does not rely on being atomic
 * wrt interrupts.
 */
void account_page_writeback(struct page *page)
{
	inc_zone_page_state(page, NR_WRITEBACK);
	inc_zone_page_state(page, NR_WRITTEN);
}
EXPORT_SYMBOL(account_page_writeback);

/*
 * For address_spaces which do not use buffers.  Just tag the page as dirty in
 * its radix tree.
 *
 * This is also used when a single buffer is being dirtied: we want to set the
 * page dirty in that case, but not all the buffers.  This is a "bottom-up"
 * dirtying, whereas __set_page_dirty_buffers() is a "top-down" dirtying.
 *
 * Most callers have locked the page, which pins the address_space in memory.
 * But zap_pte_range() does not lock the page, however in that case the
 * mapping is pinned by the vma's ->vm_file reference.
 *
 * We take care to handle the case where the page was truncated from the
 * mapping by re-checking page_mapping() inside tree_lock.
 */
int __set_page_dirty_nobuffers(struct page *page)
{
	if (!TestSetPageDirty(page)) {
		struct address_space *mapping = page_mapping(page);
		struct address_space *mapping2;

		if (!mapping)
			return 1;

		spin_lock_irq(&mapping->tree_lock);
		mapping2 = page_mapping(page);
		if (mapping2) { /* Race with truncate? */
			BUG_ON(mapping2 != mapping);
			WARN_ON_ONCE(!PagePrivate(page) && !PageUptodate(page));
			account_page_dirtied(page, mapping);
			radix_tree_tag_set(&mapping->page_tree,
				page_index(page), PAGECACHE_TAG_DIRTY);
		}
		spin_unlock_irq(&mapping->tree_lock);
		if (mapping->host) {
			/* !PageAnon && !swapper_space */
			__mark_inode_dirty(mapping->host, I_DIRTY_PAGES);
		}
		return 1;
	}
	return 0;
}
EXPORT_SYMBOL(__set_page_dirty_nobuffers);

/*
 * When a writepage implementation decides that it doesn't want to write this
 * page for some reason, it should redirty the locked page via
 * redirty_page_for_writepage() and it should then unlock the page and return 0
 */
int redirty_page_for_writepage(struct writeback_control *wbc, struct page *page)
{
	wbc->pages_skipped++;
	return __set_page_dirty_nobuffers(page);
}
EXPORT_SYMBOL(redirty_page_for_writepage);

/*
 * Dirty a page.
 *
 * For pages with a mapping this should be done under the page lock
 * for the benefit of asynchronous memory errors who prefer a consistent
 * dirty state. This rule can be broken in some special cases,
 * but should be better not to.
 *
 * If the mapping doesn't provide a set_page_dirty a_op, then
 * just fall through and assume that it wants buffer_heads.
 */
int set_page_dirty(struct page *page)
{
	struct address_space *mapping = page_mapping(page);

	if (likely(mapping)) {
		int (*spd)(struct page *) = mapping->a_ops->set_page_dirty;
		/*
		 * readahead/lru_deactivate_page could remain
		 * PG_readahead/PG_reclaim due to race with end_page_writeback
		 * About readahead, if the page is written, the flags would be
		 * reset. So no problem.
		 * About lru_deactivate_page, if the page is redirty, the flag
		 * will be reset. So no problem. but if the page is used by readahead
		 * it will confuse readahead and make it restart the size rampup
		 * process. But it's a trivial problem.
		 */
		ClearPageReclaim(page);
#ifdef CONFIG_BLOCK
		if (!spd)
			spd = __set_page_dirty_buffers;
#endif
		return (*spd)(page);
	}
	if (!PageDirty(page)) {
		if (!TestSetPageDirty(page))
			return 1;
	}
	return 0;
}
EXPORT_SYMBOL(set_page_dirty);

/*
 * set_page_dirty() is racy if the caller has no reference against
 * page->mapping->host, and if the page is unlocked.  This is because another
 * CPU could truncate the page off the mapping and then free the mapping.
 *
 * Usually, the page _is_ locked, or the caller is a user-space process which
 * holds a reference on the inode by having an open file.
 *
 * In other cases, the page should be locked before running set_page_dirty().
 */
int set_page_dirty_lock(struct page *page)
{
	int ret;

	lock_page_nosync(page);
	ret = set_page_dirty(page);
	unlock_page(page);
	return ret;
}
EXPORT_SYMBOL(set_page_dirty_lock);

/*
 * Clear a page's dirty flag, while caring for dirty memory accounting.
 * Returns true if the page was previously dirty.
 *
 * This is for preparing to put the page under writeout.  We leave the page
 * tagged as dirty in the radix tree so that a concurrent write-for-sync
 * can discover it via a PAGECACHE_TAG_DIRTY walk.  The ->writepage
 * implementation will run either set_page_writeback() or set_page_dirty(),
 * at which stage we bring the page's dirty flag and radix-tree dirty tag
 * back into sync.
 *
 * This incoherency between the page's dirty flag and radix-tree tag is
 * unfortunate, but it only exists while the page is locked.
 */
int clear_page_dirty_for_io(struct page *page)
{
	struct address_space *mapping = page_mapping(page);

	BUG_ON(!PageLocked(page));

	if (mapping && mapping_cap_account_dirty(mapping)) {
		/*
		 * Yes, Virginia, this is indeed insane.
		 *
		 * We use this sequence to make sure that
		 *  (a) we account for dirty stats properly
		 *  (b) we tell the low-level filesystem to
		 *      mark the whole page dirty if it was
		 *      dirty in a pagetable. Only to then
		 *  (c) clean the page again and return 1 to
		 *      cause the writeback.
		 *
		 * This way we avoid all nasty races with the
		 * dirty bit in multiple places and clearing
		 * them concurrently from different threads.
		 *
		 * Note! Normally the "set_page_dirty(page)"
		 * has no effect on the actual dirty bit - since
		 * that will already usually be set. But we
		 * need the side effects, and it can help us
		 * avoid races.
		 *
		 * We basically use the page "master dirty bit"
		 * as a serialization point for all the different
		 * threads doing their things.
		 */
		if (page_mkclean(page))
			set_page_dirty(page);
		/*
		 * We carefully synchronise fault handlers against
		 * installing a dirty pte and marking the page dirty
		 * at this point. We do this by having them hold the
		 * page lock at some point after installing their
		 * pte, but before marking the page dirty.
		 * Pages are always locked coming in here, so we get
		 * the desired exclusion. See mm/memory.c:do_wp_page()
		 * for more comments.
		 */
		if (TestClearPageDirty(page)) {
			dec_zone_page_state(page, NR_FILE_DIRTY);
			dec_bdi_stat(mapping->backing_dev_info,
					BDI_RECLAIMABLE);
			return 1;
		}
		return 0;
	}
	return TestClearPageDirty(page);
}
EXPORT_SYMBOL(clear_page_dirty_for_io);

int test_clear_page_writeback(struct page *page)
{
	struct address_space *mapping = page_mapping(page);
	int ret;

	if (mapping) {
		struct backing_dev_info *bdi = mapping->backing_dev_info;
		unsigned long flags;

		spin_lock_irqsave(&mapping->tree_lock, flags);
		ret = TestClearPageWriteback(page);
		if (ret) {
			radix_tree_tag_clear(&mapping->page_tree,
						page_index(page),
						PAGECACHE_TAG_WRITEBACK);
			if (bdi_cap_account_writeback(bdi)) {
				__dec_bdi_stat(bdi, BDI_WRITEBACK);
				__bdi_writeout_inc(bdi);
			}
		}
		spin_unlock_irqrestore(&mapping->tree_lock, flags);
	} else {
		ret = TestClearPageWriteback(page);
	}
	if (ret)
		dec_zone_page_state(page, NR_WRITEBACK);
	return ret;
}

int test_set_page_writeback(struct page *page)
{
	struct address_space *mapping = page_mapping(page);
	int ret;

	if (mapping) {
		struct backing_dev_info *bdi = mapping->backing_dev_info;
		unsigned long flags;

		spin_lock_irqsave(&mapping->tree_lock, flags);
		ret = TestSetPageWriteback(page);
		if (!ret) {
			radix_tree_tag_set(&mapping->page_tree,
						page_index(page),
						PAGECACHE_TAG_WRITEBACK);
			if (bdi_cap_account_writeback(bdi))
				__inc_bdi_stat(bdi, BDI_WRITEBACK);
		}
		if (!PageDirty(page))
			radix_tree_tag_clear(&mapping->page_tree,
						page_index(page),
						PAGECACHE_TAG_DIRTY);
		radix_tree_tag_clear(&mapping->page_tree,
				     page_index(page),
				     PAGECACHE_TAG_TOWRITE);
		spin_unlock_irqrestore(&mapping->tree_lock, flags);
	} else {
		ret = TestSetPageWriteback(page);
	}
	if (!ret)
		account_page_writeback(page);
	return ret;

}
EXPORT_SYMBOL(test_set_page_writeback);

/*
 * Return true if any of the pages in the mapping are marked with the
 * passed tag.
 */
int mapping_tagged(struct address_space *mapping, int tag)
{
	int ret;
	rcu_read_lock();
	ret = radix_tree_tagged(&mapping->page_tree, tag);
	rcu_read_unlock();
	return ret;
}
EXPORT_SYMBOL(mapping_tagged);
