/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:48:41 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/18 18:46:23 by mamaurai         ###   ########.fr       */
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

void
	__clean_all(void)
{
	size_t	idx;

	idx = 0;
	while (idx < MALLOC_LIST_SIZE)
	{
		__clean(idx);
		idx += 1;
	}
}

void	__clean(size_t	list_nbr)
{
	if (list_nbr > MALLOC_LIST_SIZE)
		return ;
	__lstclear(__malloc(0, list_nbr), free);
}

int8_t	__free(void	*addr)
{
	size_t	stack;

	stack = __is_in_my_memory(addr);
	if (__FALSE == stack)
		return (free(addr), FAILURE);
	__list_remove(__malloc(0, stack), addr);
	return (SUCCESS);
}

size_t
	__is_in_my_memory(void *ptr)
{
	size_t	idx;

	idx = 0;
	while (idx < MALLOC_LIST_SIZE)
	{
		if (__TRUE == __is_in_stack(ptr, idx))
			return (idx);
		idx += 1;
	}
	return (__FALSE);
}

t_boolean
	__is_in_stack(void *ptr, size_t list_stack)
{
	t_list	**head;
	t_list	*tmp;

	tmp = NULL;
	head = __malloc(0, list_stack);
	tmp = (*head);
	if (NULL == ptr || 0 == list_stack)
		return (__FALSE);
	while (tmp)
	{
		if (ptr == tmp->content)
			return (__TRUE);
		tmp = tmp->next;
	}
	return (__FALSE);
}

size_t
	__mem_stack_len(size_t list_stack)
{
	t_list	**head;

	head = __malloc(0, list_stack);
	return (__lstsize((*head)));
}

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
