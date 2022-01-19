/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strslen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:41:13 by mamaurai          #+#    #+#             */
/*   Updated: 2022/01/18 10:44:52 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t
	__strslen(char **strs)
{
	size_t	len;

	len = 0;
	if (NULL == strs || !*strs)
		return (0);
	while (strs[len])
		len += 1;
	return (len);
}
