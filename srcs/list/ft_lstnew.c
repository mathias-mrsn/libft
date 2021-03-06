/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:54:05 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/19 21:38:11 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*__lstnew(void *content, size_t id)
{
	t_list	*newlist;

	newlist = malloc(sizeof(t_list));
	if (!newlist)
		return (free(content), __malloc_error(__LINE__,
				__FILE__, sizeof(t_list)), NULL);
	newlist->content = content;
	newlist->id = id;
	newlist->next = NULL;
	return (newlist);
}
