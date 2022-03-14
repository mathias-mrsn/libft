/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_buffer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:10:08 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/14 11:10:09 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	__destroy_buffer(void)
{
	const t_buf_attr	attr = {.fd = STDOUT_FILENO, .flags = DESTROY_BUF};

	__init_buffer(&attr);
}

void
	__reset_buffer(void)
{
	t_buffer	*buffer;

	buffer = __init_buffer(NULL);
	buffer->index = 0;
	__bzero(buffer->buffer, BUFFER_SIZE);
}
