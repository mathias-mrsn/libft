/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 12:01:14 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/02 17:34:21 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*__strtrim(const char *s1, const char *set)
{
	return (__mstrtrim(s1, set, STANDARD_STACK));
}
