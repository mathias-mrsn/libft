/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:21:38 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/15 14:16:51 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MALLOC_H
# define FT_MALLOC_H

# define BLOCK_SIZE			50
# define MAX_MALLOC_SIZE	SIZE_T_MAX
# define MIN_MALLOC_SIZE	1ULL
# define MAX_BLOCKS			(-1U)

# ifndef GC_DEBUG
#  define GC_DEBUG 0
# endif

# if defined(GC_DEBUG) && (GC_DEBUG == 1)
#  define LOG(err) __dprintf(2, "garbage_collector: error: (%s %s:l%d) %s\n", __func__, __FILE__, __LINE__, err);
# else
#  define LOG(err)
# endif

enum	e_flags
{
	
	/*	
		If space is free in a block then pointers will move to fill this space 
		If you often repeat malloc-free functions then use this flag to make your GC faster
	*/
	
	FRAGMENTATION = (1ULL << 0),

	/* 	This flag will free and unlink a block if its memory array is empty */

	FREE_BLOCK_IF_EMPTY	= (1ULL << 1)
};

enum	e_actions
{
	INIT_BLOCK = (1ULL << 0),
	ADD_BLOCK = (1ULL << 1),
	DESTROY_BLOCK = (1ULL << 2),
	
	NONE = (1ULL << 3)
};

typedef struct s_gc_block
{	
	uint32_t	_block_id;
	
	void		*_memory[BLOCK_SIZE];
	uint32_t	_index;
	uint32_t	_nbr_ptr;
	uint32_t	_index_block;
	void		*_ptr_max;
	void		*_ptr_min;

	uint64_t	_flags;

	struct s_gc_block *_next;
	struct s_gc_block *_prev;
}			t_gc_block;

/*

	to do:

	-	free
	-	destroy_block
	-	print_mem
	-	memlen

*/

# define GARBAGE_SETTINGS (FRAGMENTATION | FREE_BLOCK_IF_EMPTY)

void*	__gc_alloc(size_t);
int		__gc_show_memory();
// void	__gc_free(void*);

#endif