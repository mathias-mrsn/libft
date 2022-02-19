/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_append.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 21:15:11 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/19 21:27:02 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int
	__file_append(char *filename)
{
	int	fd;

	if (NULL == filename)
		return (OPEN_ERROR);
	fd = open(filename, O_WRONLY | O_APPEND | O_CREAT);
	if (-1 == fd)
		return (OPEN_ERROR);
	else
		return (fd);
}
