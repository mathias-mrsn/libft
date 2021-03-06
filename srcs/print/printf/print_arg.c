/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 09:36:34 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/27 19:17:33 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	__ft_unsigned_putnbr__(unsigned int nb,
	char *base, t_options *options)
{
	if (nb >= ft_strlen(base))
		__ft_unsigned_putnbr__(nb / ft_strlen(base), base, options);
	ft_putchar(base[nb % ft_strlen(base)], options->fd, options);
}

static void	__ft_print_addr__(unsigned long addr, int first, t_options *options)
{
	char	*base;

	base = "0123456789abcdef";
	if (first == 0)
		ft_putstr("0x", -1, options);
	if (addr >= 16)
	{
		__ft_print_addr__(addr / 16, ++first, options);
		__ft_print_addr__(addr % 16, ++first, options);
	}
	else
		ft_putchar(base[addr % 16], options->fd, options);
}

static void	__ft_print_convert__(t_options *options, t_argument *arg)
{
	if ((options->conversion == 'd' || options->conversion == 'i')
		&& !((int)arg->arg == 0 && options->precision_value == 0))
		ft_putnbr((int)arg->arg, options->fd, options);
	else if (options->conversion == 's')
		ft_putstr(arg->arg_s, options->precision_value, options);
	else if (options->conversion == 'c')
		ft_putchar(arg->arg_c, options->fd, options);
	else if (options->conversion == '%')
		ft_putchar('%', options->fd, options);
	else if (options->conversion == 'u'
		&& !((int)arg->arg == 0 && options->precision_value == 0))
		__ft_unsigned_putnbr__((unsigned int)arg->arg, DECIMAL, options);
	else if (options->conversion == 'x'
		&& !((int)arg->arg == 0 && options->precision_value == 0))
		__ft_unsigned_putnbr__((unsigned int)arg->arg, HEXA_LOWER, options);
	else if (options->conversion == 'X'
		&& !((int)arg->arg == 0 && options->precision_value == 0))
		__ft_unsigned_putnbr__((unsigned int)arg->arg, HEXA_UPPER, options);
	else if (options->conversion == 'p')
		__ft_print_addr__((unsigned long)arg->arg, 0, options);
}

static void	__ft_print_sign__(t_options *options, t_argument *arg)
{
	if (ft_is_charset(options->conversion, "diu"))
	{
		if (options->flag_space)
			ft_putchar(' ', options->fd, options);
		if (arg->arg < 0)
			ft_putchar('-', options->fd, options);
		else if (options->flag_plus)
			ft_putchar('+', options->fd, options);
	}
	else if (ft_is_charset(options->conversion, "xX")
		&& options->flag_hashtag && arg->arg)
	{
		if (options->conversion == 'x')
			ft_putstr("0x", -1, options);
		if (options->conversion == 'X')
			ft_putstr("0X", -1, options);
	}
}

void	ft_print_hub(t_options *options, t_argument *arg)
{
	if (!options->flag_align)
		ft_print_blank(options, arg);
	__ft_print_sign__(options, arg);
	ft_print_zero(options, arg);
	__ft_print_convert__(options, arg);
	if (options->flag_align)
		ft_print_blank(options, arg);
}
