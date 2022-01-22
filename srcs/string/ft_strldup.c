/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strldup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:38:18 by mamaurai          #+#    #+#             */
/*   Updated: 2022/01/22 17:02:01 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char
	*__strldup(char *str, size_t len)
{
	size_t	size;
	char 	*newstr;

	size = __trnst((len < __strlen(str)), len, __strlen(str));
	newstr = (char *)__malloc(sizeof(char) * (size + 1), 0);
	if (NULL == newstr)
		return (NULL);
	__memcpy(newstr, str, size);
	newstr[size] = '\0';
	return (newstr);
}