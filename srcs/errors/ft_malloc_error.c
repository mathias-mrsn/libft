/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:01:27 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/17 13:41:17 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	__malloc_error(int line, char *file, size_t size)
{
	__putstr("malloc: ", STDERR_FILENO);
	if (NULL != file)
	{
		__putstr("(file:", 2);
		__putstr(file, 2);
		__putstr(", l.", 2);
		__putnbr(line, 2);
		__putstr(") ", 2);
	}
	__putstr("size of (", 2);
	__putunbr(size, 2);
	__putstr(") can't be allocate\n", 2);
	__clean_all();
	exit(EXIT_FAILURE);
}
