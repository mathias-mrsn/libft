/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_msplit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:22:45 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/02 18:33:23 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char
	**__msplit(const char *str, char c, size_t list_stack)
{
	return (__msplitcs((char *)str, (char [2]){c, '\0'}, list_stack));
}
