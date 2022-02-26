/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dirname.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias.mrsn <mathias.mrsn@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 13:19:26 by mathias.mrs       #+#    #+#             */
/*   Updated: 2022/02/26 13:29:25 by mathias.mrs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*__dirname(const char *path)
{
	ssize_t	len;

	if (NULL == path)
		return (NULL);
	len = (ssize_t)__strlen(path);
	while (len >= 0 && path[len] != '/')
		len--;
	return (__strldup((char *)path, len));
}
