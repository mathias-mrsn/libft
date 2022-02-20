/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_failure.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 10:53:22 by mathias           #+#    #+#             */
/*   Updated: 2022/02/20 11:00:13 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	__lib_fail(char *file, int line, char *msg)
{
	if (0 == __LIBFT_FAILURE_LOCATED)
		return ;
	__putstr("libft: ", STDERR_FILENO);
	if (NULL != file)
	{
		__putstr("(file:", STDERR_FILENO);
		__putstr(file, STDERR_FILENO);
		__putstr(", l.", STDERR_FILENO);
		__putnbr(line, STDERR_FILENO);
		__putstr(") ", STDERR_FILENO);
	}
	__putstr(msg, STDERR_FILENO);
	__putstr("\n", STDERR_FILENO);
}
