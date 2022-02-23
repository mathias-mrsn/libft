/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:50:03 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/23 12:06:46 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*__memcpy(void *dst, const void *src, size_t n)
{
	uint8_t			*s1;
	uint8_t			*s2;
	__uint128_t		*us1;
	__uint128_t		*us2;

	if ((!src && !dst) || dst == src)
		return (dst);
	us1 = (__uint128_t *)dst;
	us2 = (__uint128_t *)src;
	while (n >= sizeof(__uint128_t))
	{
		*us1++ = *us2++;
		n -= sizeof(__uint128_t);
	}
	s1 = (uint8_t *)us1;
	s2 = (uint8_t *)us2;
	while (n)
	{
		--n;
		*s1++ = *s2++;
	}
	return (dst);
}
