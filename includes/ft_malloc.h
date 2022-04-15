/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:21:38 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/14 16:22:06 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MALLOC_H
#define FT_MALLOC_H

#include "libft.h"

# define BLOCK_SIZE	1024
# define MAX_MALLOC_SIZE	SIZE_T_MAX
# define MIN_MALLOC_SIZE	1ULL

# define MAX_BLOCKS			(-1)

# ifndef GC_DEBUG
#  define GC_DEBUG 1
# endif

# if defined(GC_DEBUG) && (GC_DEBUG == 1)
#  define ERROR(err) __dprintf(2, "ft_ls: error: (%s %s:l%d) %s\n", __func__, __FILE__, __LINE__, err);
# else
#  define ERROR(err)
# endif

enum	e_actions
{
	
	/*	If space is free in a block then pointers will move to fill this space 
	
	If you often repeat malloc-free functions then use this flag to make your GC faster
	*/
	
	FRAGMENTATION = (1ULL << 0),

	/* This flag will free and unlink a block if its memory array is empty */

	FREE_BLOCK_IF_EMPTY	= (1ULL << 1)
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

	-	add front
	-	add back
	-	free
	-	destroy_block
	-	print_mem
	-	memlen

*/

#endif