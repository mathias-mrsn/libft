/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trn_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:08:57 by mamaurai          #+#    #+#             */
/*   Updated: 2022/01/19 14:54:22 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int8_t
	__trn8(int condition, int8_t true, int8_t false)
{
	if (__SUCCESS == condition)
		return (true);
	else
		return (false);
}

uint8_t
	__trnu8(int condition, uint8_t true, uint8_t false)
{
	if (__SUCCESS == condition)
		return (true);
	else
		return (false);
}
