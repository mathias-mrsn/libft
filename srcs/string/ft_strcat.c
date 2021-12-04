#include "libft.h"

char *__strcat(const char *s1, const char *s2)
{
	char *str;
	int i;

	i = 0;
	str = malloc(sizeof(char) * (__strlen(s1) + __strlen(s2) + 1));
	if (!str)
		return (NULL);
	while (*s1)
	{
		str[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		str[i] = *s2;
		s2++;
		i++;
	}
	str[i] = '\0';
	return (str);
}