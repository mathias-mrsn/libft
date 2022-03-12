/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_buffer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:34:10 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/12 14:57:45 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_buffer
	*__init_buffer(const t_buf_attr *attr)
{
	static t_buffer	*_buffer = NULL;

	if (_buffer && attr && (attr->flags & DESTROY_BUF))
	{
		free(_buffer);
		return (NULL);
	}
	else
	{
		_buffer = __malloc(sizeof(t_buffer), BUFFER_STACK);
		if (attr)
			_buffer->fd = attr->fd;
		else
			_buffer->fd = STDOUT_FILENO;
	}
	return (_buffer);
}

void
	__destroy_buffer(void)
{
	const t_buf_attr	attr = {.fd = STDOUT_FILENO, .flags = DESTROY_BUF};

	__init_buffer(&attr);
}

int
	__flush_buffer(void)
{
	const t_buffer	*_buffer = __init_buffer(NULL);

	if (NULL == _buffer)
		return (__ERROR);
	else if (_buffer->index)
	{
		if (SYSCALL_ERR == write(_buffer->fd, _buffer->buffer, _buffer->index))
			return (SYSCALL_ERR);
	}
	__destroy_buffer();
	return (__SUCCESS);
}

void
	__reset_buffer(t_buffer *buffer)
{
	buffer->index = 0;
	__bzero(buffer->buffer, BUFFER_SIZE);
}

int
	__add_buffer_c(char c)
{
	t_buffer	*buffer;

	buffer = __init_buffer(NULL);
	if (NULL == buffer)
		return (SYSCALL_ERR);
	buffer->buffer[buffer->index++] = c;
	if (BUFFER_SIZE >= buffer->index)
	{
		if (SYSCALL_ERR == write(buffer->fd, buffer->buffer, buffer->index))
			return (SYSCALL_ERR);
		__reset_buffer(buffer);
	}
	return (__SUCCESS);
}
