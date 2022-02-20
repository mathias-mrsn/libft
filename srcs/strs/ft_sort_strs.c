/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_strs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 00:46:23 by mathias           #+#    #+#             */
/*   Updated: 2022/02/20 00:56:37 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	__sort_strs(char **tab)
{
	int	i;

	i = 0;
	while (tab[i + 1])
	{
		if (__strcmp(tab[i], tab[i + 1]) > 0)
		{
			__memswap((void **)&tab[i], (void **)&tab[i + 1]);
			i = -1;
		}
		i++;
	}
}