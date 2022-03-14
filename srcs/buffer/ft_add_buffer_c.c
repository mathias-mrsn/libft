/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_buffer_c.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:09:24 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/14 11:09:24 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int
	__add_buffer_c(char c)
{
	t_buffer	*buffer;

	buffer = __init_buffer(NULL);
	if (NULL == buffer)
		return (SYSCALL_ERR);
	buffer->buffer[buffer->index++] = c;
	if (BUFFER_SIZE <= buffer->index)
	{
		if (SYSCALL_ERR == write(buffer->fd, buffer->buffer, buffer->index))
			return (SYSCALL_ERR);
		__reset_buffer();
	}
	return (__SUCCESS);
}
