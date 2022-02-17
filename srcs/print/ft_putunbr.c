/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:41:21 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/17 13:28:54 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	__putunbr(size_t n, int fd)
{
	if (n > 9)
		__putunbr(n / 10, fd);
	__putchar(n % 10 + 48, fd);
}
