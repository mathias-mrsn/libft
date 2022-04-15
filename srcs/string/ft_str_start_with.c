/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_start_with.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:46:48 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/15 13:02:37 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int
	__str_start_with(char *str, char *to_find)
{
	size_t	index;

	index = 0;
	if (!str || !to_find)
		return (__ERROR);
	while (str[index] && to_find[index] && str[index] == to_find[index])
		index++;
	if ('\0' != to_find[index])
		return (FAILURE);
	return (SUCCESS);
}
