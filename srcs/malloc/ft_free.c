/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:48:10 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/20 00:03:39 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int8_t	__free(void	*addr)
{
	size_t	stack;

	stack = __is_in_my_memory(addr);
	if (__FALSE == stack)
		return (free(addr), __FAILURE);
	__list_remove(__malloc(0, stack), addr);
	return (__SUCCESS);
}
