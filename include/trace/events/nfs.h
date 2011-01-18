#undef TRACE_SYSTEM
#define TRACE_SYSTEM nfs

#if !defined(_TRACE_NFS_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_NFS_H

#include <linux/nfs_fs.h>


TRACE_EVENT(nfs_commit_unstable_pages,

	TP_PROTO(struct inode *inode,
		 struct writeback_control *wbc,
		 int sync,
		 int ret
	),

	TP_ARGS(inode, wbc, sync, ret),

	TP_STRUCT__entry(
		__array(char, name, 32)
		__field(unsigned long,	ino)
		__field(unsigned long,	npages)
		__field(unsigned long,	to_commit)
		__field(unsigned long,	write_chunk)
		__field(int,		sync)
		__field(int,		ret)
	),

	TP_fast_assign(
		strncpy(__entry->name,
			dev_name(inode->i_mapping->backing_dev_info->dev), 32);
		__entry->ino		= inode->i_ino;
		__entry->npages		= NFS_I(inode)->npages;
		__entry->to_commit	= NFS_I(inode)->ncommit;
		__entry->write_chunk	= wbc->per_file_limit;
		__entry->sync		= sync;
		__entry->ret		= ret;
	),

	TP_printk("bdi %s: ino=%lu npages=%ld tocommit=%lu "
		  "write_chunk=%lu sync=%d ret=%d",
		  __entry->name,
		  __entry->ino,
		  __entry->npages,
		  __entry->to_commit,
		  __entry->write_chunk,
		  __entry->sync,
		  __entry->ret
	)
);

TRACE_EVENT(nfs_commit_release,

	TP_PROTO(struct inode *inode,
		 unsigned long offset,
		 unsigned long len),

	TP_ARGS(inode, offset, len),

	TP_STRUCT__entry(
		__array(char, name, 32)
		__field(unsigned long,	ino)
		__field(unsigned long,	offset)
		__field(unsigned long,	len)
	),

	TP_fast_assign(
		strncpy(__entry->name,
			dev_name(inode->i_mapping->backing_dev_info->dev), 32);
		__entry->ino		= inode->i_ino;
		__entry->offset		= offset;
		__entry->len		= len;
	),

	TP_printk("bdi %s: ino=%lu offset=%lu len=%lu",
		  __entry->name,
		  __entry->ino,
		  __entry->offset,
		  __entry->len
	)
);


#endif /* _TRACE_NFS_H */

/* This part must be outside protection */
#include <trace/define_trace.h>
