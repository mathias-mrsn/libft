/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_except.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:15:01 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/15 11:38:06 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t
	__strlen_except(char *str, char *charset)
{
	size_t	res;
	size_t	index;

	res = 0;
	index = 0;
	if (NULL == str)
		return (FAILURE);
	while (str[index])
	{
		if (FAILURE == __is_charset(str[index], charset))
			res += 1;
		index += 1;
	}
	return (res);
}
