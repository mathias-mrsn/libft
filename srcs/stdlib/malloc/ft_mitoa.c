/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:15:11 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/02 18:31:56 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_fill(uint64_t *nb, int64_t n, int *neg)
{
	if (n < 0)
		(*neg) = 1;
	else
		(*neg) = 0;
	if (n < 0)
		(*nb) = -n;
	else
		(*nb) = n;
}

char	*__mitoa(int64_t n, size_t list_stack)
{
	uint64_t	nb;
	int			neg;
	int			len;
	char		*res;

	ft_fill(&nb, n, &neg);
	len = __nbrlen(nb) + neg;
	res = __malloc(sizeof(char) * len + 1, list_stack);
	if (!res)
		return (NULL);
	res[len] = '\0';
	while (nb / 10)
	{
		res[--len] = nb % 10 + 48;
		nb /= 10;
	}
	res[--len] = nb + 48;
	if (neg)
		res[0] = '-';
	return (res);
}
