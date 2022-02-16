/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mstrs_add_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:32:52 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/16 13:35:48 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_boolean
	__mstrs_add_back(char ***strs, char *str, size_t list_stack)
{
	const char		**old = (const char **)(*strs);
	const size_t	size = __strslen((char **)old);
	char			**new;

	new = (char **)__malloc(sizeof(char *) * (size + 2), list_stack);
	if (NULL == new)
		return (__FAILURE);
	__memmove(new, old, size * 8);
	new[size] = str;
	new[size + 1] = NULL;
	(*strs) = new;
	return (__SUCCESS);
}