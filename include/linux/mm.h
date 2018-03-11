#ifndef _MM_H
#define _MM_H

#define PAGE_SIZE 4096

extern unsigned long get_free_page(void);
extern unsigned long put_page(unsigned long page,unsigned long address);
extern void free_page(unsigned long addr);


#define LOW_MEM 0x100000

#define PAGE_DIRTY	0x40
#define PAGE_ACCESSED	0x20
#define PAGE_USER	0x04
#define PAGE_RW		0x02
#define PAGE_PRESENT	0x01
#endif
