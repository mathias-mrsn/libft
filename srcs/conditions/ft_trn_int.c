/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trn_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:58:32 by mamaurai          #+#    #+#             */
/*   Updated: 2022/01/19 14:54:31 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int32_t
	__trn32(int condition, int32_t true, int32_t false)
{
	if (__SUCCESS == condition)
		return (true);
	else
		return (false);
}

uint32_t
	__trnu32(int condition, uint32_t true, uint32_t false)
{
	if (__SUCCESS == condition)
		return (true);
	else
		return (false);
}
