/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_append.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 21:15:11 by mamaurai          #+#    #+#             */
/*   Updated: 2022/01/28 21:48:13 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int
	__file_append(char *filename)
{
	int	fd;

	if (NULL == filename)
		return (OPEN_ERROR);
	if (__TRUE == __file_exist(filename))
		return (OPEN_ERROR);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (-1 == fd)
		return (OPEN_ERROR);
	else
		return (fd);
}
