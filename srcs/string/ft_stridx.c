/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stridx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:48:49 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/15 11:37:54 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int64_t
	__stridx(char *str, char *charset)
{
	size_t	i;

	i = 0;
	if (NULL == str || NULL == charset)
		return (__ERROR);
	while (str[i])
	{
		if (SUCCESS == __is_charset(str[i], charset))
			return (i);
		i += 1;
	}
	return (__ERROR);
}
