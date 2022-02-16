/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_msubstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:34:51 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/16 13:35:34 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*__msubstr(char const *s, unsigned int start,
	size_t len, size_t list_stack)
{
	size_t	i;
	char	*new;

	i = 0;
	if (!s)
		return (NULL);
	if (__strlen(s) <= start)
		len = 0;
	if (__strlen(s) <= len)
		len = __strlen(s);
	new = __malloc(sizeof(char) * (len + 1), list_stack);
	if (!new)
		return (NULL);
	while (s[i + start] && i < len)
	{
		new[i] = s[i + start];
		i++;
	}
	new[i] = '\0';
	return (new);
}
