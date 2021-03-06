/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puterr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:07:07 by mamaurai          #+#    #+#             */
/*   Updated: 2022/01/25 10:22:15 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	__puterr(char *err_msg)
{
	__putstr("Error:\n", STDERR_FILENO);
	__putstr(err_msg, STDERR_FILENO);
}
