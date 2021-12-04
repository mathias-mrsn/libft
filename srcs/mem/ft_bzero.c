#include "libft.h"

void __bzero(void *b, size_t len)
{
	unsigned char *str;

	str = (unsigned char *)b;
	while (len--)
		str[len] = 0;
}