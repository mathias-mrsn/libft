/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_colors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:21:46 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/23 17:23:18 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int
	__get_t(int trgb)
{
	return ((trgb >> 24) & 0xFF);
}

int
	__get_r(int trgb)
{
	return ((trgb >> 16) & 0xFF);
}

int
	__get_g(int trgb)
{
	return ((trgb >> 8) & 0xFF);
}

int
	__get_b(int trgb)
{
	return (trgb & 0xFF);
}
