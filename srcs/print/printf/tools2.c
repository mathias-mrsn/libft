/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 09:36:39 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/27 19:11:12 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int fd, t_options *options)
{
	unsigned int	nb;

	if (n < 0)
		nb = -n;
	else
		nb = n;
	if (nb > 9)
		ft_putnbr(nb / 10, fd, options);
	ft_putchar(nb % 10 + 48, fd, options);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str, int nb, t_options *options)
{
	if (nb == 0)
		return ;
	while (*str && nb--)
		ft_putchar(*str++, options->fd, options);
}
