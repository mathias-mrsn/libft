#include "libft.h"

void	__lstiter(t_list *lst, void (*f)(void *))
{
	t_list *tmp;

	tmp = lst;
	while(tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}