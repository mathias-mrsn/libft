#include "libft.h"

char *__strdup(const char *src)
{
	char *res;
	int i;

	i = 0;
	res = (char *)malloc(sizeof(char) * __strlen(src) + 1);
	if (!res)
		return (NULL);
	while (src[i])
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}