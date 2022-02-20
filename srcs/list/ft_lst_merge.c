/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_merge.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 00:21:13 by mathias           #+#    #+#             */
/*   Updated: 2022/02/20 00:21:28 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	__lst_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*list;

	list = (*begin_list1);
	while (list)
	{
		if (!(list->next))
		{
			list->next = begin_list2;
			break ;
		}
		list = list->next;
	}
	if (!(list))
		*begin_list1 = begin_list2;
}
