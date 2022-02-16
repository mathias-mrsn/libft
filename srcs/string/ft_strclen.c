/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:40:10 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/12 18:42:32 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t
	__strclen(const char *str, const char c)
{
	size_t	i;

	i = 0;
	if (NULL == str)
		return (0);
	while (str[i] && str[i] != c)
		i++;
	return (i);
}
