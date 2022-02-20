/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:59:42 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/20 11:22:41 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define STRS_NULL 	"strs is NULL"
#define STRS_SMALLER 	"strs smaller than at value"

char
	*__strs_at(char **strs, size_t at)
{
	if (NULL == strs || NULL == (*strs))
		return (__lib_output(__FILE__, __LINE__, STRS_NULL), NULL);
	else if (__strslen(strs) >= at)
		return (__lib_output(__FILE__, __LINE__, STRS_SMALLER), NULL);
	else
		return (strs[at]);
}
