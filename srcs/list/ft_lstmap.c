#include "libft.h"

t_list	*__lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *newelem;

	new = 0;
	if(!f || !del || !lst)
		return (NULL);
	while(lst)
	{
		newelem = __lstnew((*f)(lst->content));
		if (!newelem)
		{
			__lstclear(&new, del);
			return (new);
		}
		__lstadd_back(&new, newelem);
		lst = lst->next;
	}
	return (new);
}