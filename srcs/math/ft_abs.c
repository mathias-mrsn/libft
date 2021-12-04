#include "../includes/libft.h"

long	__abs(long x)
{
	if(x < 0)
		return (x * -1);
	return (x);
}