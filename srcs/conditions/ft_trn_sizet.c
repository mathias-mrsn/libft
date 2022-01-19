/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trn_sizet.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:19:33 by mamaurai          #+#    #+#             */
/*   Updated: 2022/01/19 14:55:01 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t
	__trnst(int condition, size_t true, size_t false)
{
	if (__SUCCESS == condition)
		return (true);
	else
		return (false);
}
