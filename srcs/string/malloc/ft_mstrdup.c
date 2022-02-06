/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mstrdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:25:38 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/06 11:52:48 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*__mstrdup(const char *src, size_t list_stack)
{
	char	*res;
	int		i;

	i = 0;
	if (!src)
		return (NULL);
	res = (char *)__malloc(sizeof(char) * __strlen(src) + 1, list_stack);
	if (!res)
		return (NULL);
	while (src[i])
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
