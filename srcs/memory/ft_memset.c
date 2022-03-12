/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:50:25 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/12 16:35:28 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline t_uwide_int
	__int_to_wide_c__(int c)
{
	t_uwide_int	new_c;
	uint8_t		shift_idx;

	shift_idx = 1;
	new_c = c;
	while (shift_idx < sizeof(t_uwide_int))
	{
		new_c = (new_c << 8) | new_c;
		shift_idx++;
	}
	return (new_c);
}

void	
	*__memset(void *b, int c, size_t len)
{
	uint8_t				*s;
	t_uwide_int			*wide;
	const t_uwide_int	_c = __int_to_wide_c__(c);

	if (!b)
		return (NULL);
	wide = (t_uwide_int *)b;
	while (len >= sizeof(t_uwide_int))
	{
		*wide++ = _c;
		len -= sizeof(t_wide_int);
	}
	s = (uint8_t *)wide;
	while (len--)
		*s++ = c;
	return (b);
}
