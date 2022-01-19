/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_end_with.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:51:13 by mamaurai          #+#    #+#             */
/*   Updated: 2022/01/19 14:57:08 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int
	__str_end_with(char *str, char *to_find)
{
	size_t	index;
	size_t	index2;

	if (!str || !to_find)
		return (__ERROR);
	index = __strlen(str);
	index2 = __strlen(to_find);
	while (index && index2 && str[index] == to_find[index2])
	{
		index--;
		index2--;
	}
	if (index2 == 0 && str[0] == str[0])
		return (__SUCCESS);
	return (__FAILURE);
}
