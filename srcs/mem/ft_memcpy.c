#include "libft.h"

void *__memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *s1;
	unsigned char *s2;

	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	if (!src && !dst)
		return (dst);
	while (n)
	{
		--n;
		s1[n] = s2[n];
	}
	return (dst);
}