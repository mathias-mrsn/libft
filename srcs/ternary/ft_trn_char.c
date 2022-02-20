/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trn_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:08:57 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/20 11:26:15 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define IS_TRUE		"the condition is true"
#define IS_FALSE	"the condition is false"

int8_t
	__trn8(int condition, int8_t true, int8_t false)
{
	if (__TRUE == condition)
		return (__lib_output(__FILE__, __LINE__, IS_TRUE), true);
	else
		return (__lib_output(__FILE__, __LINE__, IS_FALSE), false);
}

uint8_t
	__trnu8(int condition, uint8_t true, uint8_t false)
{
	if (__TRUE == condition)
		return (__lib_output(__FILE__, __LINE__, IS_TRUE), true);
	else
		return (__lib_output(__FILE__, __LINE__, IS_FALSE), false);
}
