/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 12:01:24 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/02 17:35:53 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*__substr(char const *s, unsigned int start, size_t len)
{
	return (__msubstr(s, start, len, STANDARD_STACK));
}
