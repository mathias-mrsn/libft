/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flush_buffer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:10:11 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/14 11:10:11 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int
	__flush_buffer(void)
{
	const t_buffer	*_buffer = __init_buffer(NULL);

	if (NULL == _buffer)
		return (SYSCALL_ERR);
	else if (_buffer->index)
	{
		if (SYSCALL_ERR == write(_buffer->fd, _buffer->buffer, _buffer->index))
			return (SYSCALL_ERR);
	}
	__destroy_buffer();
	return (__SUCCESS);
}
