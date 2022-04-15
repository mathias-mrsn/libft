/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfile_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 21:32:07 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/15 11:38:06 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_boolean
	__putfile(char *filename, int fd_output)
{
	int		fd;
	int		len;
	char	buffer[BUFFER_READ];

	if (__FALSE == __file_exist(filename))
		return (FAILURE);
	fd = open(filename, O_WRONLY);
	if (-1 == fd)
		return (FAILURE);
	while (1)
	{
		len = read(fd, buffer, BUFFER_READ);
		if (len <= 0)
			break ;
		write(fd_output, buffer, len);
	}
	close(fd);
	return (SUCCESS);
}
