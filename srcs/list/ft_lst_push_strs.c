/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_push_strs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 00:11:46 by mathias           #+#    #+#             */
/*   Updated: 2022/02/20 00:13:49 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*__lst_push_strs(int size, char **strs)
{
	int		i;
	t_list	*res;

	i = -1;
	res = NULL;
	while (++i < size)
		__lstadd_front(&res, __lstnew(strs[i], 0));
	return (res);
}
