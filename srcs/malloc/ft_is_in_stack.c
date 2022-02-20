/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_in_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:34:53 by mathias           #+#    #+#             */
/*   Updated: 2022/02/19 23:45:06 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_boolean
	__is_in_stack(void *ptr, size_t list_stack)
{
	t_list	**head;
	t_list	*tmp;

	tmp = NULL;
	head = __malloc(0, list_stack);
	tmp = (*head);
	if (NULL == ptr || 0 == list_stack)
		return (__FALSE);
	while (tmp)
	{
		if (ptr == tmp->content)
			return (__TRUE);
		tmp = tmp->next;
	}
	return (__FALSE);
}
