/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrs_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 21:18:17 by mamaurai          #+#    #+#             */
/*   Updated: 2022/01/28 21:42:30 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	__putstrs(char *title, char **strs, int fd)
{
	int	idx;

	idx = 0;
	if (NULL != title)
	{
		__putstr("--> ", fd);
		__putstr(title, fd);
		__putstr(" <--\n", fd);
	}
	__putstr("/---------------\\\n", fd);
	if (NULL != strs && NULL != (*strs))
	{
		while (strs[idx])
		{
			__putnbr(idx, fd);
			__putstr("==> ", fd);
			__putstr(strs[idx], fd);
			__putstr("\n", fd);
			idx++;
		}
	}
	__putstr("\\---------------/\n", fd);
}
