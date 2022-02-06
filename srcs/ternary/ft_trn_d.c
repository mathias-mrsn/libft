/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trn_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 14:38:40 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/06 11:56:00 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double
	__trnd(int condition, double true, double false)
{
	if (__TRUE == condition)
		return (true);
	else
		return (false);
}

long double
	__trnld(int condition, long double true, long double false)
{
	if (__TRUE == condition)
		return (true);
	else
		return (false);
}
