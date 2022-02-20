/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_to_file.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 19:00:53 by mathias           #+#    #+#             */
/*   Updated: 2022/02/20 11:30:39 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define STR_NULL	"str or filename if NULL"

t_boolean
	__add_to_file(char *filename, char *str)
{
	int	fd;

	if (NULL == str || NULL == filename)
		return (__lib_output(__FILE__, __LINE__, STR_NULL), __FAILURE);
	if (__FALSE == __file_exist(filename))
		return (__FAILURE);
	fd = __file_append(filename);
	if (OPEN_ERROR == fd)
		return (__FAILURE);
	write(fd, str, __strlen(str));
	return (__SUCCESS);
}
