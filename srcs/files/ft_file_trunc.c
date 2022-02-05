/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_trunc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 21:12:46 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/05 13:11:06 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int
	__file_trunc(char *filename)
{
	int	fd;

	if (NULL == filename)
		return (OPEN_ERROR);
	if (__TRUE == __file_exist(filename))
		return (OPEN_ERROR);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC);
	if (-1 == fd)
		return (OPEN_ERROR);
	else
		return (fd);
}
