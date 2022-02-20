/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_in_my_memory.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:43:58 by mathias           #+#    #+#             */
/*   Updated: 2022/02/19 23:56:29 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t
	__is_in_my_memory(void *ptr)
{
	size_t	idx;

	idx = 0;
	while (idx < MALLOC_LIST_SIZE)
	{
		if (__TRUE == __is_in_stack(ptr, idx))
			return (idx);
		idx += 1;
	}
	return (__FALSE);
}
