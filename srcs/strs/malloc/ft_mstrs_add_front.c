/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mstrs_add_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:35:28 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/20 11:22:41 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define STRS_NULL 		"strs or str is NULL"

t_boolean
	__mstrs_add_front(char ***strs, char *str, size_t list_stack)
{
	const char		**old = (const char **)(*strs);
	const size_t	size = __strslen((char **)old);
	char			**new;

	if (NULL == strs || NULL == *strs || NULL == str)
		return (__lib_output(__FILE__, __LINE__, STRS_NULL), __ERROR);
	new = (char **)__malloc(sizeof(char *) * (size + 2), list_stack);
	if (NULL == new)
		return (__FAILURE);
	new[0] = str;
	__memmove(&new[1], old, size * 8);
	new[size + 1] = NULL;
	(*strs) = new;
	return (__SUCCESS);
}
