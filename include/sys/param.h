/*
 *  linux/fs/truncate.c
 *
 *  (C) 1991  Linus Torvalds
 */
#ifndef _SYS_PARAM_H
#define _SYS_PARAM_H

#define HZ 100
#define EXEC_PAGESIZE 4096

#define NGROUPS		32	/* Max number of groups per user */
#define NOGROUP		-1

#define MAXHOSTNAMELEN 8

#endif


/*
static void free_ind(int dev,int block)
{
	struct buffer_head * bh;
	unsigned short * p;
	int i;

	if (!block)
		return;
	if ((bh=bread(dev,block))) {
		p = (unsigned short *) bh->b_data;
		for (i=0;i<512;i++,p++)
			if (*p)
				free_block(dev,*p);
		brelse(bh);
	}
	free_block(dev,block);
}

static void free_dind(int dev,int block)
{
	struct buffer_head * bh;
	unsigned short * p;
	int i;

	if (!block)
		return;
	if ((bh=bread(dev,block))) {
		p = (unsigned short *) bh->b_data;
		for (i=0;i<512;i++,p++)
			if (*p)
				free_ind(dev,*p);
		brelse(bh);
	}
	free_block(dev,block);
}

void truncate(struct m_inode * inode)
{
	int i;

	if (!(S_ISREG(inode->i_mode) || S_ISDIR(inode->i_mode)))
		return;
	for (i=0;i<7;i++)
		if (inode->i_zone[i]) {
			free_block(inode->i_dev,inode->i_zone[i]);
			inode->i_zone[i]=0;
		}
	free_ind(inode->i_dev,inode->i_zone[7]);
	free_dind(inode->i_dev,inode->i_zone[8]);
	inode->i_zone[7] = inode->i_zone[8] = 0;
	inode->i_size = 0;
	inode->i_dirt = 1;
	inode->i_mtime = inode->i_ctime = CURRENT_TIME;
}*/


