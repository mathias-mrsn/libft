/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_is_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 00:49:05 by mathias           #+#    #+#             */
/*   Updated: 2022/02/20 00:50:02 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_boolean
	__strs_is_sort(char **tab)
{
	int	i;

	i = 0;
	while (tab[i + 1])
	{
		if (__strcmp(tab[i], tab[i + 1]) > 0)
			return (__FALSE);
		i++;
	}
	return (__FALSE);
}
