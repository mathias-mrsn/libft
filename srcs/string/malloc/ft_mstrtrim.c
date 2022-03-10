/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mstrtrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:32:54 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/10 12:49:12 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static uint32_t
	__head_idx__(const char *str, const char *set)
{
	uint32_t	idx;

	if (!str || !set)
		return (0);
	idx = 0;
	while (str[idx] && __is_charset(str[idx], (char *)set))
		idx++;
	return (idx);
}

static uint32_t
	__tail_idx__(const char *str, const char *set)
{
	uint32_t	idx;

	if (!str || !set)
		return (0);
	idx = (uint32_t)__strlen(str);
	while (idx-- > 0 && __is_charset(str[idx], (char *)set))
		idx--;
	return (idx);
}

char	*__mstrtrim(const char *s1, const char *set, size_t list_stack)
{
	const uint32_t	head = __head_idx__(s1, set);
	const uint32_t	tail = __tail_idx__(s1, set);

	if (!s1 || !set)
		return (NULL);
	return (__mstrldup((char *)s1 + head, (tail - head) + 1, list_stack));
}
