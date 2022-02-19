/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem_stack_len.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 21:30:41 by mathias           #+#    #+#             */
/*   Updated: 2022/02/19 22:30:35 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t
	__mem_stack_len(size_t list_stack)
{
	t_list	**head;

	head = __malloc(0, list_stack);
	return (__lstsize((*head)));
}
