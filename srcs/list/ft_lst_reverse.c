/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 00:18:35 by mathias           #+#    #+#             */
/*   Updated: 2022/02/20 01:06:50 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	__lst_reverse(t_list *begin_list)
{
	unsigned int	sb;
	unsigned int	se;
	t_list			*save;
	void			*tmp;

	sb = 0;
	se = __lstsize(begin_list);
	while (sb < se / 2)
	{
		tmp = __lst_at(begin_list, sb)->content;
		save = __lst_at(begin_list, (se - sb - 1))->content;
		__lst_at(begin_list, sb)->content = save;
		__lst_at(begin_list, se - sb - 1)->content = tmp;
		sb++;
	}
}
