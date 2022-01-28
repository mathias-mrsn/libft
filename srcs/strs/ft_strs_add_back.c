/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_add_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:18:04 by mamaurai          #+#    #+#             */
/*   Updated: 2022/01/25 17:11:45 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_boolean
	__strs_add_back(char ***strs, char *str)
{
	const char		**old = (const char **)(*strs);
	const size_t	size = __strslen((char **)old);
	char			**new;

	new = (char **)malloc(sizeof(char *) * (size + 2));
	if (NULL == new)
		return (__FAILURE);
	__memmove(new, old, size * 8);
	new[size] = str;
	new[size + 1] = NULL;
	free((*strs));
	(*strs) = new;
	return (__SUCCESS);
}
