/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_to_file.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 19:00:53 by mathias           #+#    #+#             */
/*   Updated: 2022/04/15 11:38:06 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define STR_NULL	"str or filename if NULL"

t_boolean
	__add_to_file(char *filename, char *str)
{
	int	fd;

	if (NULL == str || NULL == filename)
		return (__lib_output(__FILE__, __LINE__, STR_NULL), FAILURE);
	if (__FALSE == __file_exist(filename))
		return (FAILURE);
	fd = __file_append(filename);
	if (OPEN_ERROR == fd)
		return (FAILURE);
	write(fd, str, __strlen(str));
	return (SUCCESS);
}
