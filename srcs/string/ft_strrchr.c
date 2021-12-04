#include "libft.h"

char *__strrchr(const char *s, int c)
{
	size_t i;

	i = __strlen(s) + 1;
	while (i--)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
	}
	return (NULL);
}