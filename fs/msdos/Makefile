#
# Makefile for the linux MS-DOS-filesystem routines.
#
# Note! Dependencies are done automagically by 'make dep', which also
# removes any old dependencies. DON'T put your own dependencies here
# unless it's something special (ie not a .c file).
#
# Note 2! The CFLAGS definitions are now in the main makefile...

include ../../Makefile.header

LDFLAGS += -r
CFLAGS  += -I../../include
CPP     += -I../../include

#
# Makefile for the linux MS-DOS-filesystem routines.
#
# Note! Dependencies are done automagically by 'make dep', which also
# removes any old dependencies. DON'T put your own dependencies here
# unless it's something special (ie not a .c file).
#
# Note 2! The CFLAGS definitions are now in the main makefile...

.c.s:
	$(CC) $(CFLAGS) \
	-S -o $*.s $<
.c.o:
	$(CC) $(CFLAGS) -c -o $*.o $<
.s.o:
	$(AS) -o $*.o $<

OBJS=	namei.o inode.o file.o dir.o misc.o fat.o

msdos.o: $(OBJS)
	$(LD) -r -o msdos.o $(OBJS)

clean:
	rm -f core *.o *.a tmp_make
	for i in *.c;do rm -f `basename $$i .c`.s;done

dep:
	sed '/\#\#\# Dependencies/q' < Makefile > tmp_make
	for i in *.c;do $(CPP) -M $$i;done >> tmp_make
	cp tmp_make Makefile

### Dependencies:
dir.o : dir.c ../../include/asm/segment.h ../../include/linux/sched.h \
  ../../include/linux/head.h ../../include/linux/fs.h ../../include/linux/limits.h \
  ../../include/linux/wait.h ../../include/linux/types.h ../../include/linux/dirent.h \
  ../../include/linux/vfs.h ../../include/linux/minix_fs_sb.h \
  ../../include/linux/ext_fs_sb.h ../../include/linux/msdos_fs_sb.h \
  ../../include/linux/mm.h ../../include/linux/kernel.h ../../include/linux/signal.h \
  ../../include/linux/time.h ../../include/linux/param.h ../../include/linux/resource.h \
  ../../include/linux/msdos_fs.h ../../include/linux/errno.h \
  ../../include/linux/stat.h 
fat.o : fat.c ../../include/linux/msdos_fs.h ../../include/linux/fs.h \
  ../../include/linux/limits.h ../../include/linux/wait.h ../../include/linux/types.h \
  ../../include/linux/dirent.h ../../include/linux/vfs.h ../../include/linux/minix_fs_sb.h \
  ../../include/linux/ext_fs_sb.h ../../include/linux/msdos_fs_sb.h \
  ../../include/linux/kernel.h ../../include/linux/errno.h ../../include/linux/stat.h 
file.o : file.c ../../include/asm/segment.h ../../include/asm/system.h \
  ../../include/linux/sched.h ../../include/linux/head.h ../../include/linux/fs.h \
  ../../include/linux/limits.h ../../include/linux/wait.h ../../include/linux/types.h \
  ../../include/linux/dirent.h ../../include/linux/vfs.h ../../include/linux/minix_fs_sb.h \
  ../../include/linux/ext_fs_sb.h ../../include/linux/msdos_fs_sb.h \
  ../../include/linux/mm.h ../../include/linux/kernel.h ../../include/linux/signal.h \
  ../../include/linux/time.h ../../include/linux/param.h ../../include/linux/resource.h \
  ../../include/linux/msdos_fs.h ../../include/linux/errno.h \
  ../../include/linux/fcntl.h ../../include/linux/stat.h 
inode.o : inode.c ../../include/linux/msdos_fs.h ../../include/linux/fs.h \
  ../../include/linux/limits.h ../../include/linux/wait.h ../../include/linux/types.h \
  ../../include/linux/dirent.h ../../include/linux/vfs.h ../../include/linux/minix_fs_sb.h \
  ../../include/linux/ext_fs_sb.h ../../include/linux/msdos_fs_sb.h \
  ../../include/linux/kernel.h ../../include/linux/sched.h ../../include/linux/head.h \
  ../../include/linux/mm.h ../../include/linux/signal.h ../../include/linux/time.h \
  ../../include/linux/param.h ../../include/linux/resource.h \
  ../../include/linux/errno.h ../../include/linux/string.h ../../include/linux/stat.h \
  ../../include/asm/segment.h 
misc.o : misc.c ../../include/linux/msdos_fs.h ../../include/linux/fs.h \
  ../../include/linux/limits.h ../../include/linux/wait.h ../../include/linux/types.h \
  ../../include/linux/dirent.h ../../include/linux/vfs.h ../../include/linux/minix_fs_sb.h \
  ../../include/linux/ext_fs_sb.h ../../include/linux/msdos_fs_sb.h \
  ../../include/linux/sched.h ../../include/linux/head.h ../../include/linux/mm.h \
  ../../include/linux/kernel.h ../../include/linux/signal.h \
  ../../include/linux/time.h ../../include/linux/param.h ../../include/linux/resource.h \
  ../../include/linux/errno.h ../../include/linux/string.h ../../include/linux/stat.h 
namei.o : namei.c ../../include/asm/segment.h ../../include/linux/sched.h \
  ../../include/linux/head.h ../../include/linux/fs.h ../../include/linux/limits.h \
  ../../include/linux/wait.h ../../include/linux/types.h ../../include/linux/dirent.h \
  ../../include/linux/vfs.h ../../include/linux/minix_fs_sb.h \
  ../../include/linux/ext_fs_sb.h ../../include/linux/msdos_fs_sb.h \
  ../../include/linux/mm.h ../../include/linux/kernel.h ../../include/linux/signal.h \
  ../../include/linux/time.h ../../include/linux/param.h ../../include/linux/resource.h \
  ../../include/linux/msdos_fs.h ../../include/linux/errno.h \
  ../../include/linux/string.h ../../include/linux/stat.h 

