/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trn_ll.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:17:51 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/20 11:26:26 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define IS_TRUE		"the condition is true"
#define IS_FALSE	"the condition is false"

int64_t
	__trn64(int condition, int64_t true, int64_t false)
{
	if (__TRUE == condition)
		return (__lib_output(__FILE__, __LINE__, IS_TRUE), true);
	else
		return (__lib_output(__FILE__, __LINE__, IS_FALSE), false);
}

uint64_t
	__trnu64(int condition, uint64_t true, uint64_t false)
{
	if (__TRUE == condition)
		return (__lib_output(__FILE__, __LINE__, IS_TRUE), true);
	else
		return (__lib_output(__FILE__, __LINE__, IS_FALSE), false);
}
