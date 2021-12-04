#include "libft.h"

void __putnstr(char *str, int fd, size_t len)
{
	if (!str)
		return;
	while (*str && len--)
		__putchar(*str++, fd);
}
