/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mstr_rm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:46:12 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/02 18:50:45 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	*__mstr_rm(const char *str, const char c, size_t list_stack)
{
	return (__mstr_rm_cs(str, (char [2]){c, '\0'}, list_stack));
}
