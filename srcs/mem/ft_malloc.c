#include "libft.h"

void	*__malloc(size_t count, size_t size)
{
	static t_list 	*lst = NULL;
	void			*ret;

	ret = NULL;
	if (count && size)
	{
		ret = __calloc(count, size);
		__lstadd_front(&lst, __lstnew(ret));
	}
	if (0 == count)
		return (&lst);
	return (ret);
}