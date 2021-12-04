#include "libft.h"

void *__calloc(size_t count, size_t size)
{
	void *mem;

	mem = malloc(size * count);
	if (!mem)
		return (NULL);
	__bzero(mem, count * size);
	return (mem);
}