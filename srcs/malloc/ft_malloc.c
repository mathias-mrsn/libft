/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:48:41 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/14 16:20:59 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_malloc.h"

// void	*__malloc(size_t count, size_t	list_nbr)
// {
// 	static t_list	*lst[MALLOC_LIST_SIZE];
// 	static size_t	id_g = 0;
// 	void			*ret;

// 	ret = NULL;
// 	if (list_nbr > MALLOC_LIST_SIZE)
// 		return (NULL);
// 	if (0 == count)
// 		return (&lst[list_nbr]);
// 	if (count)
// 	{
// 		ret = __calloc(count, 1);
// 		if (NULL != ret && list_nbr > 0)
// 			__lstadd_front(&lst[list_nbr], __lstnew(ret, ++id_g));
// 	}
// 	return (ret);
// }

static t_gc_block*
_b
(void)
{
	static t_gc_block*	blocks = NULL;
	return (blocks);
}

static int
_add_block_front
(t_gc_block** blocks)
{
	t_gc_block*	new_block;
	
	if (blocks == NULL)
		return (SYSCALL_ERR);
	uint32_t			last_id = (*blocks)->_block_id;
	new_block = __calloc(sizeof(t_gc_block), 1);
	if (new_block == NULL)
		return (SYSCALL_ERR);
	__bzero((void *)new_block, sizeof(t_gc_block));
	new_block->_block_id = last_id + 1;
	
	
	
}

// void*
// __gc_free
// ()

void*
__gc_alloc
(size_t __size)
{
	t_gc_block*	blocks = _b();
	void*				ptr = NULL;

	if (__size > MAX_MALLOC_SIZE && __size < MIN_MALLOC_SIZE)
	{
		ERROR("invalid malloc size");
		return (NULL);
	}
	if (blocks == NULL || blocks->_index == BLOCK_SIZE)
	{
		if ((blocks != NULL && blocks->_block_id + 1 >= MAX_BLOCKS) || blocks == NULL && MAX_BLOCKS == 0)
		{
			ERROR("GC has too many memory block");
			return (NULL);
		}
		else if (SYSCALL_ERR == _add_block_front(&blocks))
		{
			ERROR("add block failed");
			return (NULL);
		}
	}
	ptr = __calloc(__size, 1);
	if (ptr == NULL)
	{
		ERROR("malloc failed");
		return (NULL);
	}
	blocks->_memory[blocks->_index] = ptr;
	blocks->_index += 1;
	if ((blocks->_flags & FRAGMENTATION) == 0)
	{
		if (ptr > blocks->_ptr_max)	{blocks->_ptr_max = ptr;}
		if (ptr < blocks->_ptr_min)	{blocks->_ptr_min = ptr;}
	}
	return (ptr);
}