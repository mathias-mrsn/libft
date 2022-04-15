/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:47:57 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/15 13:05:54 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*__calloc(size_t count, size_t size)
{
	void	*mem;

	mem = malloc(size * count);
	// if (!mem)
	// 	return (__malloc_error(__LINE__, __FILE__, (size * count)), NULL);
	__bzero(mem, count * size);
	return (mem);
}
