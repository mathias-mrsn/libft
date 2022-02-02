/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_rm_cs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:48:49 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/02 18:55:48 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*__str_rm_cs(const char *str, const char *charset)
{
	return (__mstr_rm_cs(str, charset, STANDARD_STACK));
}
