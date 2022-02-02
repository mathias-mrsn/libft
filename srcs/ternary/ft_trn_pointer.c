/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trn_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:21:43 by mamaurai          #+#    #+#             */
/*   Updated: 2022/01/19 14:38:28 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*__trnpc(int condition, char *true, char *false)
{
	if (__SUCCESS == condition)
		return (true);
	else
		return (false);
}

void
	*__trnpv(int condition, void *true, void *false)
{
	if (__SUCCESS == condition)
		return (true);
	else
		return (false);
}

int
	*__trnpi(int condition, int *true, int *false)
{
	if (__SUCCESS == condition)
		return (true);
	else
		return (false);
}
