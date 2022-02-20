/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 15:34:08 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/19 22:33:53 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	__clean_all(void)
{
	size_t	idx;

	idx = 0;
	while (idx < MALLOC_LIST_SIZE)
	{
		__clean(idx);
		idx += 1;
	}
}