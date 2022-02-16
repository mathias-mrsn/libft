/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:44:51 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/16 13:40:38 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	__putnbr(int64_t n, int fd)
{
	uint64_t	nb;

	if (n < 0)
		nb = -n;
	else
		nb = n;
	if (n < 0)
		__putchar('-', fd);
	if (nb > 9)
		__putnbr(nb / 10, fd);
	__putchar(nb % 10 + 48, fd);
}
