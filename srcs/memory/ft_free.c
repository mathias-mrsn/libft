/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:48:10 by mamaurai          #+#    #+#             */
/*   Updated: 2022/01/22 15:46:23 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int8_t	__free(void	*addr, size_t list_nbr)
{
	t_list	*next;
	t_list	*current;
	t_list	*prev;
	t_list	**head;

	head = __malloc(0, list_nbr);
	current = *(head);
	prev = NULL;
	next = current->next;
	if (!*(head) || !addr)
		return (-1);
	while (current)
	{
		if (NULL == prev && current->content == addr)
			*(head) = next;
		if (current->content == addr)
		{
			prev->next = next;
			return (__lstdelone(current, free), 1);
		}
		prev = current;
		current = current->next;
		next = current->next;
	}
	return (0);
}
