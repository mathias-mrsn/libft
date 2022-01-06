/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:48:41 by mamaurai          #+#    #+#             */
/*   Updated: 2022/01/06 10:39:51 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*__malloc(size_t count)
{
	static t_list	*lst = NULL;
	void			*ret;

	ret = NULL;
	if (count)
	{
		ret = __calloc(count, 1);
		__lstadd_front(&lst, __lstnew(ret));
	}
	if (0 == count)
		return (&lst);
	return (ret);
}
