/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_maxlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:30:46 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/12 14:58:18 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define STRS_NULL 		"strs is NULL"

size_t
	__strs_maxlen(char **strs)
{
	size_t			idx;
	size_t			maxlen;

	idx = 0;
	maxlen = 0;
	if (!strs || !(*strs))
		return (__lib_output(__FILE__, __LINE__, STRS_NULL), 0);
	while (strs[idx])
	{
		if (__strlen(strs[idx]) > maxlen)
			maxlen = __strlen(strs[idx]);
		idx++;
	}
	return (maxlen);
}
