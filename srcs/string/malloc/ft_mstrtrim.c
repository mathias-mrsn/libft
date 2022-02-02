/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mstrtrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:32:54 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/02 17:34:25 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*__mstrtrim(const char *s1, const char *set, size_t list_stack)
{
	char	*trim;
	size_t	i;
	size_t	j;
	size_t	index;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	j = __strlen(s1);
	while (s1[i] && __is_charset(s1[i], (char *)set))
		i++;
	while (--j > i && __is_charset(s1[j], (char *)set))
		;
	trim = __malloc(sizeof(char) * (j - i + 1), list_stack);
	if (!trim)
		return (NULL);
	j -= i - 1;
	index = 0;
	while (index < j)
		trim[index++] = s1[i++];
	trim[index] = '\0';
	return (trim);
}
