#include "libft.h"

void	__striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int index;

	if (!s)
		return ;
	index = -1;
	while(s[++index])
		(*f)(index, &s[index]);
}