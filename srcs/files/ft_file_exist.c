/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_exist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 21:04:05 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/20 11:38:07 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define EXIST	"filename don't exists"

t_boolean
	__file_exist(char *filename)
{
	int	fd;

	fd = -1;
	if (NULL == filename)
		return (__FALSE);
	fd = open(filename, O_RDONLY | O_WRONLY);
	if (-1 == fd)
		return (__lib_output(__FILE__, __LINE__, EXIST), __FALSE);
	close(fd);
	return (__TRUE);
}
