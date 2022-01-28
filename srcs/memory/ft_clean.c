/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:48:03 by mamaurai          #+#    #+#             */
/*   Updated: 2022/01/22 15:32:57 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	__clean(size_t	list_nbr)
{
	if (list_nbr > MALLOC_LIST_SIZE)
		return ;
	__lstclear(__malloc(0, list_nbr), free);
}
