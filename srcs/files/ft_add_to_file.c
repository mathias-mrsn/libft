/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_to_file.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 19:00:53 by mathias           #+#    #+#             */
/*   Updated: 2022/02/19 19:05:34 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_boolean
	__add_to_file(char *filename, char *str)
{
	int	fd;
	
	if (NULL == str || NULL == filename)
		return (__FALSE);
	if (__FALSE == __file_exist(filename))
		return (__FAILURE);
	fd = __file_append(filename);
	if (OPEN_ERROR == fd)
		return (__FAILURE);
	write(fd, str, __strlen(str));
}
