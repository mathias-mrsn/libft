/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mstr_rm_cs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:38:05 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/02 18:56:12 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*__mstr_rm_cs(const char *str, const char *charset, size_t list_stack)
{
	size_t	size;
	size_t	idx;
	char	*new_str;

	idx = 0;
	if (NULL == str || NULL == charset)
		return (NULL);
	size = __str_count_cs(str, charset);
	new_str = __malloc(sizeof(char) * (size + 1), list_stack);
	if (NULL == new_str)
		return (NULL);
	size = 0;
	while (str[idx])
	{
		if (__FALSE == __is_charset(str[idx], (char *)charset))
			new_str[size++] = str[idx];
		idx++;
	}
	new_str[size] = '\0';
	return (new_str);
}
