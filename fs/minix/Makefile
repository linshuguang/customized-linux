
include ../../Makefile.header

LDFLAGS += -r
CFLAGS  += -I../../include
CPP     += -I../../include

.c.s:
	$(CC) $(CFLAGS) \
	-S -o $*.s $<
.c.o:
	$(CC) $(CFLAGS) \
	-c -o $*.o $<
.s.o:
	$(AS) -o $*.o $<

OBJS=	bitmap.o truncate.o namei.o inode.o \
	file.o dir.o symlink.o blkdev.o chrdev.o fifo.o

minix.o: $(OBJS)
	$(LD) -r -o minix.o $(OBJS)

clean:
	rm -f core *.o *.a tmp_make
	for i in *.c;do rm -f `basename $$i .c`.s;done

dep:
	sed '/\#\#\# Dependencies/q' < Makefile > tmp_make
	(for i in *.c;do $(CPP) -M $$i;done) >> tmp_make
	cp tmp_make Makefile

### Dependencies:
bitmap.o : bitmap.c ../../include/linux/string.h ../../include/sys/types.h \
  ../../include/stddef.h ../../include/linux/sched.h ../../include/linux/head.h \
  ../../include/linux/fs.h ../../include/sys/dirent.h ../../include/limits.h \
  ../../include/sys/vfs.h ../../include/linux/mm.h ../../include/linux/kernel.h \
  ../../include/signal.h ../../include/sys/param.h ../../include/sys/time.h \
  ../../include/time.h ../../include/sys/resource.h ../../include/linux/minix_fs.h 
blkdev.o : blkdev.c ../../include/errno.h ../../include/linux/sched.h \
  ../../include/linux/head.h ../../include/linux/fs.h ../../include/sys/types.h \
  ../../include/stddef.h ../../include/sys/dirent.h ../../include/limits.h \
  ../../include/sys/vfs.h ../../include/linux/mm.h ../../include/linux/kernel.h \
  ../../include/signal.h ../../include/sys/param.h ../../include/sys/time.h \
  ../../include/time.h ../../include/sys/resource.h ../../include/linux/minix_fs.h \
  ../../include/linux/tty.h ../../include/asm/system.h ../../include/termios.h \
  ../../include/linux/stat.h ../../include/linux/fcntl.h 
chrdev.o : chrdev.c ../../include/errno.h ../../include/linux/sched.h \
  ../../include/linux/head.h ../../include/linux/fs.h ../../include/sys/types.h \
  ../../include/stddef.h ../../include/sys/dirent.h ../../include/limits.h \
  ../../include/sys/vfs.h ../../include/linux/mm.h ../../include/linux/kernel.h \
  ../../include/signal.h ../../include/sys/param.h ../../include/sys/time.h \
  ../../include/time.h ../../include/sys/resource.h ../../include/linux/minix_fs.h \
  ../../include/linux/tty.h ../../include/asm/system.h ../../include/termios.h \
  ../../include/linux/stat.h ../../include/linux/fcntl.h 
dir.o : dir.c ../../include/errno.h ../../include/asm/segment.h \
  ../../include/linux/fs.h ../../include/sys/types.h ../../include/stddef.h \
  ../../include/sys/dirent.h ../../include/limits.h ../../include/sys/vfs.h \
  ../../include/linux/minix_fs.h ../../include/linux/stat.h 
fifo.o : fifo.c ../../include/linux/sched.h ../../include/linux/head.h \
  ../../include/linux/fs.h ../../include/sys/types.h ../../include/stddef.h \
  ../../include/sys/dirent.h ../../include/limits.h ../../include/sys/vfs.h \
  ../../include/linux/mm.h ../../include/linux/kernel.h ../../include/signal.h \
  ../../include/sys/param.h ../../include/sys/time.h ../../include/time.h \
  ../../include/sys/resource.h ../../include/linux/minix_fs.h 
file.o : file.c ../../include/errno.h ../../include/sys/dirent.h \
  ../../include/limits.h ../../include/sys/types.h ../../include/stddef.h \
  ../../include/asm/segment.h ../../include/asm/system.h ../../include/linux/fcntl.h \
  ../../include/linux/sched.h ../../include/linux/head.h ../../include/linux/fs.h \
  ../../include/sys/vfs.h ../../include/linux/mm.h ../../include/linux/kernel.h \
  ../../include/signal.h ../../include/sys/param.h ../../include/sys/time.h \
  ../../include/time.h ../../include/sys/resource.h ../../include/linux/minix_fs.h \
  ../../include/linux/stat.h 
inode.o : inode.c ../../include/linux/string.h ../../include/sys/types.h \
  ../../include/stddef.h ../../include/linux/stat.h ../../include/linux/sched.h \
  ../../include/linux/head.h ../../include/linux/fs.h ../../include/sys/dirent.h \
  ../../include/limits.h ../../include/sys/vfs.h ../../include/linux/mm.h \
  ../../include/linux/kernel.h ../../include/signal.h ../../include/sys/param.h \
  ../../include/sys/time.h ../../include/time.h ../../include/sys/resource.h \
  ../../include/linux/minix_fs.h ../../include/asm/system.h \
  ../../include/asm/segment.h 
namei.o : namei.c ../../include/linux/sched.h ../../include/linux/head.h \
  ../../include/linux/fs.h ../../include/sys/types.h ../../include/stddef.h \
  ../../include/sys/dirent.h ../../include/limits.h ../../include/sys/vfs.h \
  ../../include/linux/mm.h ../../include/linux/kernel.h ../../include/signal.h \
  ../../include/sys/param.h ../../include/sys/time.h ../../include/time.h \
  ../../include/sys/resource.h ../../include/linux/minix_fs.h \
  ../../include/linux/string.h ../../include/linux/stat.h ../../include/linux/fcntl.h \
  ../../include/asm/segment.h ../../include/errno.h ../../include/const.h 
symlink.o : symlink.c ../../include/errno.h ../../include/asm/segment.h \
  ../../include/linux/sched.h ../../include/linux/head.h ../../include/linux/fs.h \
  ../../include/sys/types.h ../../include/stddef.h ../../include/sys/dirent.h \
  ../../include/limits.h ../../include/sys/vfs.h ../../include/linux/mm.h \
  ../../include/linux/kernel.h ../../include/signal.h ../../include/sys/param.h \
  ../../include/sys/time.h ../../include/time.h ../../include/sys/resource.h \
  ../../include/linux/minix_fs.h ../../include/linux/stat.h 
truncate.o : truncate.c ../../include/errno.h ../../include/linux/sched.h \
  ../../include/linux/head.h ../../include/linux/fs.h ../../include/sys/types.h \
  ../../include/stddef.h ../../include/sys/dirent.h ../../include/limits.h \
  ../../include/sys/vfs.h ../../include/linux/mm.h ../../include/linux/kernel.h \
  ../../include/signal.h ../../include/sys/param.h ../../include/sys/time.h \
  ../../include/time.h ../../include/sys/resource.h ../../include/linux/minix_fs.h \
  ../../include/linux/tty.h ../../include/asm/system.h ../../include/termios.h \
  ../../include/linux/stat.h ../../include/linux/fcntl.h
