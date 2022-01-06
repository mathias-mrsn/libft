/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_in.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:42:35 by mamaurai          #+#    #+#             */
/*   Updated: 2022/01/06 10:48:36 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int
	__str_is_in(char *str, char *to_find)
{
	char *res;

	res = __strnstr(str, to_find, SIZE_T_MAX);
	if (!res)
		return (__FAILURE);
	return (__SUCCESS);
}
