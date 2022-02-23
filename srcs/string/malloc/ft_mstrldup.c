/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mstrldup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:31:24 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/23 12:06:13 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*__mstrldup(char *str, size_t len, size_t list_stack)
{
	size_t	size;
	char	*newstr;

	size = __trnst((len < __strlen(str)), len, __strlen(str));
	newstr = (char *)__malloc(sizeof(char) * (size + 1), list_stack);
	if (NULL == newstr)
		return (NULL);
	__memcpy(newstr, str, size);
	newstr[size] = '\0';
	return (newstr);
}
