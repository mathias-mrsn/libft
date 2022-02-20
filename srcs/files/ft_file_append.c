/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_append.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 21:15:11 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/20 11:33:48 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define STR_NULL	"filename is NULL"
#define CANT_OPEN	"file can't be opened"

int
	__file_append(char *filename)
{
	int	fd;

	if (NULL == filename)
		return (__lib_output(__FILE__, __LINE__, STR_NULL), OPEN_ERROR);
	fd = open(filename, O_WRONLY | O_APPEND | O_CREAT);
	if (-1 == fd)
		return (__lib_output(__FILE__, __LINE__, CANT_OPEN), OPEN_ERROR);
	else
		return (fd);
}
