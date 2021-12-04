#include "libft.h"

void __putendl(char *s, int fd)
{
	if (s)
	{
		__putstr(s, fd);
		__putchar('\n', fd);
	}
}
