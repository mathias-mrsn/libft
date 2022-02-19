/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_trunc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 21:12:46 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/19 21:26:27 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int
	__file_trunc(char *filename)
{
	int	fd;

	if (NULL == filename)
		return (OPEN_ERROR);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC);
	if (-1 == fd)
		return (OPEN_ERROR);
	else
		return (fd);
}
