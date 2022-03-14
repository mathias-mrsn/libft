/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_buffer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:10:13 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/14 11:10:13 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_buffer
	*__init_buffer(const t_buf_attr *attr)
{
	static t_buffer	*_buffer = NULL;

	if (_buffer && attr && (attr->flags & DESTROY_BUF))
	{
		__memdel((void **)&_buffer);
		return (NULL);
	}
	else if (NULL == _buffer)
	{
		_buffer = __malloc(sizeof(t_buffer), __DONT_STOCK_MEM);
		if (attr)
			_buffer->fd = attr->fd;
		else
			_buffer->fd = STDOUT_FILENO;
	}
	return (_buffer);
}
