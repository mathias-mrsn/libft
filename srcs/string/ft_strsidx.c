/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsidx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:57:47 by mamaurai          #+#    #+#             */
/*   Updated: 2022/01/19 14:56:06 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int64_t
	__strsidx(char **strs, char *str)
{
	size_t	i;

	i = 0;
	if (NULL == strs || NULL == *strs || NULL == str)
		return (__ERROR);
	while (strs[i])
	{
		if (0 == __strncmp(strs[i], str, UINT64_MAX))
			return (i);
	}
	return (__ERROR);
}
