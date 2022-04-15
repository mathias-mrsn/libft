/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:48:10 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/15 11:38:06 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int8_t	__free(void	*addr)
{
	size_t	stack;

	stack = __is_in_my_memory(addr);
	if (__FALSE == stack)
		return (free(addr), FAILURE);
	__list_remove(__malloc(0, stack), addr);
	return (SUCCESS);
}
