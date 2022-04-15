/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:48:41 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/15 14:17:16 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

// static int
// _malloc_failed
// (void)
// {
	
// }

static t_gc_block*
_create_block
(uint32_t id, t_gc_block* next, t_gc_block* prev)
{
	t_gc_block*	new = NULL;

	new = __calloc(sizeof(t_gc_block), 1);
	if (!new)
		return (NULL);
	new->_block_id = id;
	new->_next = next;
	new->_prev = prev;
	return (new);
}

static t_gc_block*
_init_blocks
(int64_t flag)
{
	static t_gc_block*	blocks = NULL;

	if (flag & NONE)
		return (blocks);
	if (flag & INIT_BLOCK && blocks == NULL)
	{
		LOG("first block created");
		blocks = __calloc(sizeof(t_gc_block), 1);
		if (blocks == NULL)
			return (NULL);
	}
	if (flag & ADD_BLOCK)
	{
		LOG("new block added");
		blocks = _create_block((blocks->_block_id + 1), blocks, NULL);
		if (blocks == NULL)
			return (NULL);
	}
	if (flag & DESTROY_BLOCK)
	{
		LOG("block destroyed");
		t_gc_block*	tmp = blocks;
		blocks = ((blocks->_next) ? blocks->_next : NULL);
		__memdel((void**)&tmp);
	}
	return (blocks);
}

//Inverser affichage + logique
//Ameliorer l'affichage

int
__gc_show_memory
(void)
{
	t_gc_block*			blocks = _init_blocks(NONE);
	
	for(; blocks; blocks = blocks->_next)
	{
		for(uint32_t i = 0; i < BLOCK_SIZE; i++)
		{
			if (blocks->_memory[i] != NULL)
				__printf("x");
			else
				__printf("o");
		}
		__printf(" max_ptr = %p - min_ptr = %p", blocks->_ptr_max, blocks->_ptr_min);
		__printf("\n");
	}
	return (0);
}

void
__gc_free
(void* __ptr)
{
	t_gc_block*			blocks = _init_blocks(INIT_BLOCK);	
}



void*
__gc_alloc
(size_t __size)
{
	t_gc_block*			blocks = _init_blocks(INIT_BLOCK);
	void*				ptr = NULL;

	if (__size > MAX_MALLOC_SIZE || __size < MIN_MALLOC_SIZE)
	{
		LOG("invalid malloc size");
		return (NULL);
	}
	if (blocks->_index == BLOCK_SIZE)
	{
		
		if ((blocks != NULL && blocks->_block_id + 1 >= MAX_BLOCKS))
		{
			LOG("GC has too many memory block");
			return (NULL);
		}
		else if (NULL == _init_blocks(ADD_BLOCK))
		{
			LOG("add block failed");
			return (NULL);
		}
	}
	ptr = __calloc(__size, 1);
	if (ptr == NULL)
	{
		LOG("malloc failed");
		return (NULL);
	}
	blocks->_memory[blocks->_index] = ptr;
	blocks->_index += 1;
	if ((GARBAGE_SETTINGS & FRAGMENTATION) == 0)
	{
		if (ptr > blocks->_ptr_max)	{blocks->_ptr_max = ptr;}
		if (ptr < blocks->_ptr_min || blocks->_ptr_min == 0)	{blocks->_ptr_min = ptr;}
	}
	return (ptr);
}