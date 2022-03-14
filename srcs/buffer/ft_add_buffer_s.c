/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_buffer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:34:10 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/14 09:31:20 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int
	__add_buffer_s(char *str)
{
	t_buffer		*buffer;
	const size_t	_len = __strlen(str);

	buffer = __init_buffer(NULL);
	if (NULL == buffer)
		return (SYSCALL_ERR);
	if (BUFFER_SIZE <= _len + buffer->index)
	{
		if (SYSCALL_ERR == write(buffer->fd, buffer->buffer, buffer->index))
			return (SYSCALL_ERR);
		if (SYSCALL_ERR == write(buffer->fd, str, _len))
			return (SYSCALL_ERR);
		__reset_buffer();
	}
	else
	{
		__memcpy(buffer->buffer + buffer->index, str, _len);
		buffer->index += _len;
	}
	return (__SUCCESS);
}
