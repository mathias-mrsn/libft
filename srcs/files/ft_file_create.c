/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_create.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 21:07:30 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/20 11:37:02 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define STR_NULL	"filename is NULL"
#define CANT_OPEN	"file can't be opened"

int
	__file_create(char *filename)
{
	int	fd;

	if (NULL == filename)
		return (__lib_output(__FILE__, __LINE__, STR_NULL), OPEN_ERROR);
	if (__TRUE == __file_exist(filename))
		return (OPEN_ERROR);
	fd = open(filename, O_WRONLY | O_CREAT, 0644);
	if (-1 == fd)
		return (__lib_output(__FILE__, __LINE__, CANT_OPEN), OPEN_ERROR);
	else
		return (fd);
}
