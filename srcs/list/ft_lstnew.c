#include "libft.h"

t_list	*__lstnew(void *content)
{
	t_list	*newlist;

	newlist = malloc(sizeof(t_list));
	if(!newlist)
		return (NULL);
	newlist->content = content;
	newlist->next = NULL;
	return (newlist);
}