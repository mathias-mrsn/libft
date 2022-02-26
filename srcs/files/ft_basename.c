/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basename.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias.mrsn <mathias.mrsn@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 12:52:13 by mathias.mrs       #+#    #+#             */
/*   Updated: 2022/02/26 12:58:49 by mathias.mrs      ###   ########.fr       */
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
