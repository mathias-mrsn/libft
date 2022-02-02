/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_charset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:40:42 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/02 18:52:00 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	__is_charset(char c, char *set)
{
	while (*set)
	{
		if (c == *set)
			return (__TRUE);
		set++;
	}
	return (__FALSE);
}
