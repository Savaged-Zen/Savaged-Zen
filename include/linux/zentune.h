#ifndef _LINUX_ZENTUNE_H
#define _LINUX_ZENTUNE_H

#ifdef __KERNEL__

/* CPU Scheduler Related */
#ifdef CONFIG_SCHED_BFS

/* default */
#define rr_interval_default 6;
#define sched_iso_cpu_default 70;
/* server */
#define rr_interval_server rr_interval_default;
#define sched_iso_cpu_server sched_iso_cpu_default;
/* desktop */
#define rr_interval_desktop 3;
#define sched_iso_cpu_desktop 50;
/* custom */
#define rr_interval_custom CONFIG_RR_INTERVAL_CUSTOM;
#define sched_iso_cpu_custom CONFIG_ISO_CPU_CUSTOM;

#endif /* CONFIG_SCHED_BFS */

/* MM Related */

/* default */
#define vm_dirty_ratio_default 20;
#define dirty_background_ratio_default 10;
/* server */
#define vm_dirty_ratio_server 80;
#define dirty_background_ratio_server 1;
/* desktop */
#define vm_dirty_ratio_desktop 50;
#define dirty_background_ratio_desktop 20;
/* custom */
#define vm_dirty_ratio_custom CONFIG_DIRTY_RATIO_CUSTOM;
#define dirty_background_ratio_custom CONFIG_DIRTY_BACKGROUND_RATIO_CUSTOM;

#endif /* __KERNEL__ */

#endif
