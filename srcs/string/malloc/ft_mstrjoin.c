/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mstrjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:30:13 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/02 18:32:58 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*__mstrjoin(char const *s1, char const *s2, size_t list_stack)
{
	size_t	i;
	size_t	j;
	char	*newstr;

	if (!s1 || !s2)
		return (NULL);
	i = __strlen(s1);
	j = __strlen(s2);
	newstr = __malloc(sizeof(char) * (i + j + 1), list_stack);
	if (!newstr)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		newstr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		newstr[i + j] = s2[j];
		j++;
	}
	newstr[i + j] = '\0';
	return (newstr);
}
