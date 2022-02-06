/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trn_ll.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:17:51 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/06 11:55:42 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int64_t
	__trn64(int condition, int64_t true, int64_t false)
{
	if (__TRUE == condition)
		return (true);
	else
		return (false);
}

uint64_t
	__trnu64(int condition, uint64_t true, uint64_t false)
{
	if (__TRUE == condition)
		return (true);
	else
		return (false);
}
