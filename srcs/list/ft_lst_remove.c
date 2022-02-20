/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_remove.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:54:12 by mathias           #+#    #+#             */
/*   Updated: 2022/02/20 01:00:40 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	__list_remove(t_list **begin_list, void *data_ref)
{
	t_list	*prev;
	t_list	*next;
	t_list	*curr;

	prev = 0;
	next = (*begin_list);
	while (next)
	{
		if (next->content == data_ref)
		{
			if (prev == NULL)
				*begin_list = next->next;
			else
				prev->next = next->next;
			curr = next;
			next = next->next;
			free(curr->content);
			free(curr);
		}
		else
		{
			prev = next;
			next = prev->next;
		}
	}
}
