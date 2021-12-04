#include "libft.h"

void __putchar(char c, int fd)
{
	write(fd, &c, 1);
}

