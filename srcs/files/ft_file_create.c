/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_create.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 21:07:30 by mamaurai          #+#    #+#             */
/*   Updated: 2022/01/28 21:48:11 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int
	__file_create(char *filename)
{
	int	fd;

	if (__FALSE == __file_exist(filename))
		return (OPEN_ERROR);
	fd = open(filename, O_WRONLY | O_CREAT, 0644);
	if (-1 == fd)
		return (OPEN_ERROR);
	else
		return (fd);
}
