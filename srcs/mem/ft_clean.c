#include "libft.h"

void	__clean(void)
{
	__lstclear(__malloc(0, 0), free);
}