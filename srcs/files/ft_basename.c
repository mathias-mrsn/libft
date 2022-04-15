/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basename.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:20:48 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/13 21:20:50 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*__basename(const char *path)
{
	ssize_t	len;

	if (NULL == path)
		return (NULL);
	len = (ssize_t)__strlen(path);
	while (len >= 0 && path[len] != '/')
		len--;
	return (__strdup(path + len));
}
