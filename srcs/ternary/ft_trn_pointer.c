/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trn_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:21:43 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/06 11:55:26 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*__trnpc(int condition, char *true, char *false)
{
	if (__TRUE == condition)
		return (true);
	else
		return (false);
}

void
	*__trnpv(int condition, void *true, void *false)
{
	if (__TRUE == condition)
		return (true);
	else
		return (false);
}

int
	*__trnpi(int condition, int *true, int *false)
{
	if (__TRUE == condition)
		return (true);
	else
		return (false);
}
