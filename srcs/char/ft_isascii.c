#include "../includes/libft.h"

int __isacii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}