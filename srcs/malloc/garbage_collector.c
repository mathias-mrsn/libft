/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   garbage_collector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:42:38 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/18 18:49:17 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define NBR_COLORS	5

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

	if (flag & RETURN)
		return (blocks);
	if (flag & INIT_BLOCK && blocks == NULL)
	{
		blocks = __calloc(sizeof(t_gc_block), 1);
		if (blocks == NULL)
			return (NULL);
	}
	if (flag & ADD_BLOCK)
	{
		blocks = _create_block((blocks->_block_id + 1), blocks, NULL);
		if (blocks->_next != NULL)
			blocks->_next->_prev = blocks;
		if (blocks == NULL)
			return (NULL);
	}
	if (flag & DESTROY_BLOCK)
	{
		t_gc_block*	tmp = blocks;
		blocks = ((blocks->_next) ? blocks->_next : NULL);
		__memdel((void**)&tmp);
	}
	if (flag & CLEAN)
	{
		for(; blocks;)
		{
			t_gc_block*	tmp = blocks = blocks->_next;
			__memdel((void**)&tmp);
		}
	}
	return (blocks);
}

static char*
_is_mark
(void* ptr)
{
	char	*colr[NBR_COLORS][2] = {{(void*)YELLOW_MARK, __BHYELLOW},
									{(void*)BLUE_MARK, __BHBLUE},
									{(void*)PURPLE_MARK, __BHPURPLE},
									{(void*)CYAN_MARK, __BHCYAN},
									{(void*)WHILE_MARK, __BHWHITE}};

	for(int i = 0; i < NBR_COLORS; i++)
	{
		if (colr[i][0] == ptr)
			return (colr[i][1]);
	}
	return (NULL);
}

int
__gc_show_memory
(void)
{
	t_gc_block*			blocks = _init_blocks(RETURN);
	
	if (blocks == NULL)
	{
		__printf("\n\tGARBAGE COLLECTOR IS EMPTY\n\n");
		return (SUCCESS);
	}
	for (; blocks->_next; blocks = blocks->_next);
	for(; blocks; blocks = blocks->_prev)
	{
		if (blocks->_next == NULL)
			__printf("\n\tGARBAGE COLLECTOR (block_size = %d)\n\n", BLOCK_SIZE);
		for(uint32_t i = 0; i < BLOCK_SIZE; i++)
		{
			if (NULL != _is_mark(blocks->_memory[i]))
				__printf("%s▓%s", _is_mark(blocks->_memory[i]), __RESET);
			else if (blocks->_memory[i] != NULL)
				__printf("%s▓%s", __BHRED, __RESET);
			else
				__printf("%s▓%s", __BHGREEN, __RESET);
		}
		__printf("\n");
	}
	return (0);
}

int
__gc_add_ptr
(void* __ptr)
{
	t_gc_block*			blocks = _init_blocks(INIT_BLOCK);

	if (blocks == NULL || NULL == __ptr) {return (SYSCALL_ERR);}
	if (blocks->_index == BLOCK_SIZE)
	{
		if (blocks->_block_id + 1 >= MAX_BLOCKS)
			return (FAILURE);
		else if (NULL == _init_blocks(ADD_BLOCK))
			return (SYSCALL_ERR);
		else
			blocks = _init_blocks(INIT_BLOCK);
	}
	blocks->_memory[blocks->_index] = __ptr;
	blocks->_index += 1;
	blocks->_nbr_ptr += 1;
	return (SUCCESS);
}

int64_t
__gc_memlen
(void)
{
	t_gc_block*			blocks = _init_blocks(RETURN);
	int64_t				memlen = 0;

	if (blocks == NULL) {return (SYSCALL_ERR);}
	for(; blocks; blocks = blocks->_next)
		memlen += blocks->_nbr_ptr;
	return (memlen);
}

int
__gc_clean
(void)
{
	t_gc_block*			blocks = _init_blocks(RETURN);

	if (blocks == NULL) {return (SYSCALL_ERR);}
	for(; blocks; blocks = blocks->_next)
	{
		for (uint32_t i = 0; i < blocks->_index; i++)
		{
			if (NULL == _is_mark(blocks->_memory[i]))
				__memdel((void**)&blocks->_memory[i]);
			blocks->_memory[i] = NULL;
		}
	}
	blocks = _init_blocks(CLEAN);
	return (SUCCESS);
}

int
__gc_free
(void* __ptr)
{
	t_gc_block*			blocks = _init_blocks(RETURN);

	if (blocks == NULL) {return (SYSCALL_ERR);}
	for(; blocks; blocks = blocks->_next)
	{
		for (uint32_t i = 0; i < blocks->_index; i++)
		{
			if (blocks->_memory[i] == __ptr)
			{
				__memdel((void**)&blocks->_memory[i]);
				blocks->_memory[i] = NULL;
				blocks->_nbr_ptr -= 1;
				return (SUCCESS);
			}
		}
	}
	return (FAILURE);
}

void*
__gc_alloc
(size_t __size)
{
	void*	ptr = NULL;
	
	ptr = __calloc(__size, 1);
	if (ptr == NULL)
		return (NULL);
	if (SYSCALL_ERR == __gc_add_ptr(ptr))
	{
		__gc_clean();
		__memdel((void**)&ptr);
	}
	return (ptr);
}

int
__gc_add_mark
(int64_t color)
{
	if (_is_mark((void*)color) == NULL)
		return (SYSCALL_ERR);
	return ((SYSCALL_ERR == __gc_add_ptr((void*)color)) ? SYSCALL_ERR : SUCCESS);
}
