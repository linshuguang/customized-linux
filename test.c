#include<errno.h>
#include<stdio.h>
#define __NR_read		  3
#define __NR_write		  4
#define __NR_open		  5
#define __NR_mount		 21
#define _syscall3(type,name,atype,a,btype,b,ctype,c) \
type name(atype a,btype b,ctype c) \
{ \
long __res; \
__asm__ volatile ("int $0x80" \
	: "=a" (__res) \
	: "0" (__NR_##name),"b" ((long)(a)),"c" ((long)(b)),"d" ((long)(c))); \
if (__res>=0) \
	return (type) __res; \
errno=-__res; \
return -1; \
}
#define _syscall4(type,name,atype,a,btype,b,ctype,c,dtype,d) \
type name (atype a, btype b, ctype c, dtype d) \
{ \
long __res; \
__asm__ volatile ("int $0x80" \
	: "=a" (__res) \
	: "0" (__NR_##name),"b" ((long)(a)),"c" ((long)(b)), \
	  "d" ((long)(c)),"S" ((long)(d))); \
if (__res>=0) \
	return (type) __res; \
errno=-__res; \
return -1; \
}
#define O_RDONLY           00
static inline mount(char *source, char * target, char *type, int flag) __attribute__((always_inline));
static inline read(int fd, void * buf, int count) __attribute__((always_inline));
static inline open(char * name, int flag, int mode) __attribute__((always_inline));
static inline _syscall4(int,mount,char *,source, char *,target, char *,filesystemtype, int, mountflags)
static inline _syscall3(int,read,int ,fd, void *,buf, int,count)
static inline _syscall3(int,open,char * ,name, int,flag, int,mode)

int main()
{
	int fd,size;
	char buf[1024];
	mount("/dev/hd1","/usr/root/mnt","msdos",0);
	fd = open("/usr/root/mnt/hello.txt",O_RDONLY,0);
	size=read(fd,buf,1024);
	buf[size]=0;
	printf("%s\n",buf);
	return 1;
}

