/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trn_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:21:43 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/20 11:26:32 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define IS_TRUE		"the condition is true"
#define IS_FALSE	"the condition is false"

char
	*__trnpc(int condition, char *true, char *false)
{
	if (__TRUE == condition)
		return (__lib_output(__FILE__, __LINE__, IS_TRUE), true);
	else
		return (__lib_output(__FILE__, __LINE__, IS_FALSE), false);
}

void
	*__trnpv(int condition, void *true, void *false)
{
	if (__TRUE == condition)
		return (__lib_output(__FILE__, __LINE__, IS_TRUE), true);
	else
		return (__lib_output(__FILE__, __LINE__, IS_FALSE), false);
}

int
	*__trnpi(int condition, int *true, int *false)
{
	if (__TRUE == condition)
		return (__lib_output(__FILE__, __LINE__, IS_TRUE), true);
	else
		return (__lib_output(__FILE__, __LINE__, IS_FALSE), false);
}
