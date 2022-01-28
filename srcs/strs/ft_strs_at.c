/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:59:42 by mamaurai          #+#    #+#             */
/*   Updated: 2022/01/28 21:42:51 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*__strs_at(char **strs, size_t at)
{
	if (NULL == strs || NULL == (*strs))
		return (NULL);
	else if (__strslen(strs) >= at)
		return (NULL);
	else
		return (strs[at]);
}
