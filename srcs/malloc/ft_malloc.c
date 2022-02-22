/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:48:41 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/21 11:33:37 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*__malloc(size_t count, size_t	list_nbr)
{
	static t_list	*lst[MALLOC_LIST_SIZE];
	static size_t	id_g = 0;
	void			*ret;

	ret = NULL;
	if (list_nbr > MALLOC_LIST_SIZE)
		return (NULL);
	if (0 == count)
		return (&lst[list_nbr]);
	if (count)
	{
		ret = __calloc(count, 1);
		if (NULL != ret && list_nbr > 0)
			__lstadd_front(&lst[list_nbr], __lstnew(ret, ++id_g));
	}
	return (ret);
}
