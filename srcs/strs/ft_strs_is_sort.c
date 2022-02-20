/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_is_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 00:49:05 by mathias           #+#    #+#             */
/*   Updated: 2022/02/20 11:22:41 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define STRS_NULL 		"strs is NULL"
#define STRS_UNSORTED 	"strs is unsorted"

t_boolean
	__strs_is_sort(char **tab)
{
	int	i;

	i = 0;
	if (NULL == tab || NULL == (*tab))
		return (__lib_output(__FILE__, __LINE__, STRS_NULL), __FALSE);
	while (tab[i + 1])
	{
		if (__strcmp(tab[i], tab[i + 1]) > 0)
			return (__lib_output(__FILE__, __LINE__, STRS_UNSORTED), __FALSE);
		i++;
	}
	return (__TRUE);
}
