#include <stdio.h>
 
#if defined(__is_boemios_kernel)
#include <kernel/tty.h>
#endif
 
int putchar(int ic)	{
#if defined(__is_boemios_kernel)
	char c = (char) ic;
	tty_write(&c, sizeof(c));
#else
	// TODO: You need to implement a write system call.
 #endif
	return ic;
}
