/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 21:44:16 by mathias           #+#    #+#             */
/*   Updated: 2022/02/19 23:21:48 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void
	__print_stacks_len__(void)
{
	int		idx;
	size_t	len;
	int		nbr_stack_filled;

	nbr_stack_filled = 0;
	idx = 0;
	len = 0;
	__printf("\n\tSTACK VISUALIZER\t\t\n\n");
	while (idx < MALLOC_LIST_SIZE)
	{
		len = __mem_stack_len(idx);
		__printf("LIST N.%-3d : ", idx);
		if (0 == len)
			__printf("%s %-10d%s", __YELLOW, (int)len, __RESET);
		else
			__printf("%s %-10d%s", __BHGREEN, (int)len, __RESET);
		if (3 == (idx % 4))
			__putchar('\n', 1);
		if (len > 0)
			nbr_stack_filled++;
		idx++;
	}
	__printf("\n\t%d STACK FILLED\n\n", nbr_stack_filled);
}

static void
	__print_stack_elems__(int nbr)
{
	t_list	**head;
	t_list	*tmp;

	tmp = NULL;
	head = __malloc(0, nbr);
	tmp = (*head);
	if (0 == __mem_stack_len(nbr))
	{
		__printf("\n\tSTACK N.%d : IS EMPTY\n\n");
		return ;
	}
	__printf("\n\tSTACK N.%d :\n\n", nbr);
	while (tmp)
	{
		__printf("ID = %11d | ADDRESS ==> %11p\n", (int)tmp->id, tmp->content);
		tmp = tmp->next;
	}
	__printf("\tEND OF THE STACK\n");
}

static void
	__print_memory_error__(void)
{
	__putstr("print_memory: invalid stack number\n", STDERR_FILENO);
	__putstr("(exit - leave print_memory", 2);
	__putstr(" / reload - reload stack visualizer)\n", 2);
}

void
	__print_memory(void)
{
	char	*str;

	str = NULL;
	__print_stacks_len__();
	while (1)
	{
		__printf("Choose a stack to print > ");
		str = __gnl(0);
		if (NULL == str)
			return ;
		if (0 == __strcmp(str, "exit"))
		{
			free(str);
			break ;
		}
		else if (0 == __strcmp(str, "reload"))
			__print_stacks_len__();
		else if (0 != __strcmp(str, "") && __TRUE == __str_is(str, __IS_DIGIT)
			&& __strlen(str) < 11 && __atoi(str) < 128)
			__print_stack_elems__(__atoi(str));
		else if (0 != __strcmp(str, ""))
			__print_memory_error__();
		free(str);
	}
}
