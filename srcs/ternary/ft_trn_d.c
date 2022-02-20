/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trn_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 14:38:40 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/20 11:26:19 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define IS_TRUE		"the condition is true"
#define IS_FALSE	"the condition is false"

double
	__trnd(int condition, double true, double false)
{
	if (__TRUE == condition)
		return (__lib_output(__FILE__, __LINE__, IS_TRUE), true);
	else
		return (__lib_output(__FILE__, __LINE__, IS_FALSE), false);
}

long double
	__trnld(int condition, long double true, long double false)
{
	if (__TRUE == condition)
		return (__lib_output(__FILE__, __LINE__, IS_TRUE), true);
	else
		return (__lib_output(__FILE__, __LINE__, IS_FALSE), false);
}
