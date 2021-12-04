#include "libft.h"

void *__memset(void *b, int c, size_t len)
{
	unsigned char *str;

	str = (unsigned char *)b;
	while (len)
		str[--len] = c;
	return (b);
}