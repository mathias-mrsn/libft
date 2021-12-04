#include "libft.h"

#include <libc.h>

int8_t	__free(void	*addr)
{
	t_list	*next;
	t_list	*current;
	t_list	*prev;
	t_list	**head;

	head = __malloc(0, 0);
	current = *(head);
	prev = NULL;
	next = current->next;
	if (!*(head) || !addr)
		return (-1);
	while(current)
	{
		if (NULL == prev && current->content == addr)
			*(head) = next; 
		if (current->content == addr)
		{
			prev->next = next;
			__lstdelone(current, free);
			return (1);
		}
		prev = current;
		current = current->next;
		next = current->next;
	}
	return (0);
}