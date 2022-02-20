/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strslen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:41:13 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/20 11:22:41 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define STRS_NULL 		"strs is NULL"

size_t
	__strslen(char **strs)
{
	size_t	len;

	len = 0;
	if (NULL == strs || !*strs)
		return (__lib_output(__FILE__, __LINE__, STRS_NULL), 0);
	while (strs[len])
		len += 1;
	return (len);
}
