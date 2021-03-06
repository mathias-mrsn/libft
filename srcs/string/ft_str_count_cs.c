/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_count_cs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 21:49:26 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/02 18:52:30 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t
	__str_count_cs(const char *str, const char *charset)
{
	size_t	idx;
	size_t	count;

	idx = 0;
	count = 0;
	if (NULL == str || NULL == charset)
		return (0);
	while (str[idx] != '\0')
	{
		if (__TRUE == __is_charset(str[idx], (char *)charset))
			count += 1;
		idx += 1;
	}
	return (count);
}
