/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_msplitcs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:19:59 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/16 13:35:13 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t
	__ft_len__(char *str, char *charset)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] && !__is_charset(str[i], charset))
			len++;
		while (str[i] && !__is_charset(str[i], charset))
			i++;
		if (str[i])
			i++;
	}
	return (len);
}

static size_t
	__ft_word_len__(char *str, char *charset)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = -1;
	while (str[++i] && !__is_charset(str[i], charset))
		++len;
	return (len);
}

static size_t
	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (src[len])
		++len;
	if (size == 0)
		return (len);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (len);
}

char
	**__msplitcs(char *str, char *charset, size_t list_stack)
{
	char		**strs;
	size_t		len;
	size_t		i;
	size_t		j;

	strs = (char **)__malloc(sizeof(char *) * (__ft_len__(str, charset) + 1),
			list_stack);
	if (!strs)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] && j < __ft_len__(str, charset))
	{
		while (str[i] && __is_charset(str[i], charset))
			++i;
		len = __ft_word_len__(str + i, charset);
		strs[j] = (char *)__malloc(sizeof(char) * len + 1, list_stack);
		if (!strs[j])
			return (NULL);
		ft_strlcpy(strs[j++], str + i, len + 1);
		i += len;
	}
	strs[j] = NULL;
	return (strs);
}
