#include "libft.h"

void __putstr(char *s, int fd)
{
	if (!s)
		return;
	while (*s)
		__putchar(*s++, fd);
}
