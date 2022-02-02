/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:56:21 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/02 18:28:47 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_boolean
	__str_is(const char *str, int flags)
{
	size_t	idx;

	idx = 0;
	while (str[idx])
	{
		if (flags & __IS_ALPHA && __isalpha(str[idx]))
			idx++;
		else if (flags & __IS_DIGIT && __isdigit(str[idx]))
			idx++;
		else if (flags & __IS_ASCII && __isascii(str[idx]))
			idx++;
		else if (flags & __IS_EMPTY && __isempty(str[idx]))
			idx++;
		else if (flags & __IS_PRINTABLE && __isprint(str[idx]))
			idx++;
		else if (flags & __IS_LOWER && __islower(str[idx]))
			idx++;
		else if (flags & __IS_UPPER && __isupper(str[idx]))
			idx++;
		else
			return (__FALSE);
	}
	return (__TRUE);
}
