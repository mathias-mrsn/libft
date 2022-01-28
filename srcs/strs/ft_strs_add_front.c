/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_add_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:29:21 by mamaurai          #+#    #+#             */
/*   Updated: 2022/01/28 10:55:48 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_boolean
	__strs_add_front(char ***strs, char *str)
{
	const char		**old = (const char **)(*strs);
	const size_t	size = __strslen((char **)old);
	char			**new;

	new = (char **)malloc(sizeof(char *) * (size + 2));
	if (NULL == new)
		return (__FAILURE);
	new[0] = str;
	__memmove(&new[1], old, size * 8);
	new[size + 1] = NULL;
	free((*strs));
	(*strs) = new;
	return (__SUCCESS);
}
