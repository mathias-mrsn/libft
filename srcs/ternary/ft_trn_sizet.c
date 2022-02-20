/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trn_sizet.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:19:33 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/20 11:25:28 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define IS_TRUE		"the condition is true"
#define IS_FALSE	"the condition is false"

size_t
	__trnst(int condition, size_t true, size_t false)
{
	if (__TRUE == condition)
		return (__lib_output(__FILE__, __LINE__, IS_TRUE), true);
	else
		return (__lib_output(__FILE__, __LINE__, IS_FALSE), false);
}
