#include "libft.h"

char *__substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *new;

	i = 0;
	if (!s)
		return (NULL);
	if (__strlen(s) <= start)
		len = 0;
	if(__strlen(s) <= len)
		len = __strlen(s);	
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);

	while (s[i + start] && i < len)
	{
		new[i] = s[i + start];
		i++;
	}
	new[i] = '\0';
	return (new);
}

