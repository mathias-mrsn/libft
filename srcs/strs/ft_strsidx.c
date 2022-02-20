/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsidx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:57:47 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/20 11:22:41 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define STRS_NULL	"strs or str is NULL"
#define IS_NOT_IN 	"str string is not in strs"

int64_t
	__strsidx(char **strs, char *str)
{
	size_t	i;

	i = 0;
	if (NULL == strs || NULL == *strs || NULL == str)
		return (__lib_output(__FILE__, __LINE__, STRS_NULL), __ERROR);
	while (strs[i])
	{
		if (0 == __strncmp(strs[i], str, UINT64_MAX))
			return (i);
	}
	return (__lib_output(__FILE__, __LINE__, IS_NOT_IN), __ERROR);
}
