/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mcalloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:36:30 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/02 18:31:46 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*__mcalloc(size_t count, size_t size, size_t list_stack)
{
	void	*mem;

	mem = __malloc(size * count, list_stack);
	if (!mem)
		return (NULL);
	__bzero(mem, count * size);
	return (mem);
}
