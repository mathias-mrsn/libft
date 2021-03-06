/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 09:36:29 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/27 19:12:44 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	__printf(const char *str, ...)
{
	va_list		settings;
	t_options	options;
	t_argument	arg;

	va_start(settings, str);
	options.printed_length = 0;
	options.fd = 1;
	while (*str)
	{
		if (*str == '%')
		{
			++str;
			ft_parse_hub(&options, &str, settings, &arg);
			ft_print_hub(&options, &arg);
		}
		else
			ft_putchar(*str++, options.fd, &options);
	}
	va_end(settings);
	return (options.printed_length);
}
