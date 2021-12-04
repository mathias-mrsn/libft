#include "libft.h"

void	__lstadd_front(t_list **alst, t_list *new)
{
	new->next = (*alst);
	(*alst) = new;
}