/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_exist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 21:04:05 by mamaurai          #+#    #+#             */
/*   Updated: 2022/01/28 21:47:56 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_boolean
	__file_exist(char *filename)
{
	int	fd;

	fd = -1;
	if (NULL == filename)
		return (__FALSE);
	fd = open(filename, O_RDONLY);
	if (-1 == fd)
		return (__FALSE);
	close(fd);
	return (__TRUE);
}
