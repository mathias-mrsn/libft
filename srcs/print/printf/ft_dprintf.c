/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 19:07:48 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/27 19:17:40 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	__dprintf(int fd, const char *str, ...)
{
	va_list		settings;
	t_options	options;
	t_argument	arg;

	va_start(settings, str);
	options.printed_length = 0;
	options.fd = fd;
	while (*str)
	{
		if (*str == '%')
		{
			++str;
			ft_parse_hub(&options, &str, settings, &arg);
			ft_print_hub(&options, &arg);
		}
		else
			ft_putchar(*str++, 1, &options);
	}
	va_end(settings);
	return (options.printed_length);
}
