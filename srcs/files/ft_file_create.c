/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_create.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 21:07:30 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/19 21:26:08 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int
	__file_create(char *filename)
{
	int	fd;

	if (__TRUE == __file_exist(filename))
		return (OPEN_ERROR);
	fd = open(filename, O_WRONLY | O_CREAT, 0644);
	if (-1 == fd)
		return (OPEN_ERROR);
	else
		return (fd);
}
