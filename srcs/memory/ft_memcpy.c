/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:50:03 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/12 15:48:02 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*__memcpy(void *dst, const void *src, size_t n)
{
	uint8_t			*s1;
	uint8_t			*s2;
	t_uwide_int		*us1;
	t_uwide_int		*us2;

	if ((!src && !dst) || dst == src)
		return (dst);
	us1 = (t_uwide_int *)dst;
	us2 = (t_uwide_int *)src;
	while (n >= sizeof(t_uwide_int))
	{
		*us1++ = *us2++;
		n -= sizeof(t_uwide_int);
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
