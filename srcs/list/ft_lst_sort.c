/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 00:23:07 by mathias           #+#    #+#             */
/*   Updated: 2022/02/20 01:00:32 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	__lst_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*tmp;

	tmp = *begin_list;
	while (tmp)
	{
		if (!tmp->next)
			return ;
		if (cmp(tmp->content, tmp->next->content) > 0)
		{
			__memswap(&tmp->content, &tmp->next->content);
			tmp = *begin_list;
		}
		else
			tmp = tmp->next;
	}
}
