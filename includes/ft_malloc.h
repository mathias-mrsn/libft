/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:21:38 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/18 18:49:14 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MALLOC_H
# define FT_MALLOC_H

# define BLOCK_SIZE			64
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

enum	e_actions
{
	INIT_BLOCK = (1ULL << 0),
	ADD_BLOCK = (1ULL << 1),
	DESTROY_BLOCK = (1ULL << 2),
	CLEAN = (1ULL << 3),
	RETURN = (1ULL << 4)
};

enum	e_markcolor
{
	YELLOW_MARK = 0x01,
	BLUE_MARK = 0x02,
	PURPLE_MARK = 0x03,
	CYAN_MARK = 0x04,
	WHILE_MARK = 0x05
	
};

typedef struct s_gc_block
{	
	uint32_t	_block_id;
	
	void		*_memory[BLOCK_SIZE];
	uint32_t	_index;
	uint32_t	_nbr_ptr;

	struct s_gc_block *_next;
	struct s_gc_block *_prev;
}			t_gc_block;


/*
	GC_ALLOC takes the size of the malloc wanted
	, malloc it then put it into a garbage block.
	
	It will return NULL if the storage of the malloc has failed
	or a pointer if it has been stocked successfully
*/

void*	__gc_alloc(size_t);

/*
	GC_SHOW_MEMORY display a visual representation of your memory

	It will return SYSCALL_ERR (-1) if something wrong happened
*/

int		__gc_show_memory();

/*
	GC_FREE takes a pointer, search it into every block memory then free it.

	It will return SYSCALL_ERR if garbage can't be returned
	, FAILURE (0) if the pointer hasn't been found
	and SUCCESS (0) if the pointer has been freed
*/

int		__gc_free(void*);

/*
	GC_CLEAN clean the whole garbage collector.
	Blocks by blocks it will free the entire memory array.
	Then it will destroy each block to avoid any leak.

	It will return SYSCALL_ERR if garbage can't be returned or SUCCESS
	if the garbage has been successfully cleaned.
*/

int		__gc_clean(void);

/*
	GC_ALLOC takes a pointer then put it into a garbage block.
	
	It will return SYSCALL_ERR if garbage can't be returned 
	, FAILURE if the pointer can't be stocked due to a limit set by the user
	and SUCCESS if the pointer has been successfully stocked.
*/

int		__gc_add_ptr(void*);

/*
	GC_ADD_MARK take a color (enum e_markcolor) then add mark into the garbage collector
	, it helps user to easily understand the order of the memory allocation.

	It will return SYSCALL_ERR if the color is incorrect or if the color couldn't be added
	or SUCCESS if the color_mark has been successfully added.
*/

int		__gc_add_mark(int64_t);

/*
	GC_MEMLEN return the number of pointer who's been stocked into the garbage collector.

	It will return SYSCALL_ERR if garbage can't be returned
	otherwise it will return the number of pointer.
*/

int64_t	__gc_memlen(void);

/*
	This is the old version of the garbage collector
	This version is slower but i keep it cause it can be always useful
*/

size_t		__mem_stack_len(size_t list_stack);
void		__clean(size_t list_nbr);
int8_t		__free(void	*addr);
void		*__malloc(size_t count, size_t list_nbr);
void		__clean_all(void);
void		__print_memory(void);
t_boolean	__is_in_stack(void *ptr, size_t list_stack);
size_t		__is_in_my_memory(void *ptr);

#endif

/*

	SPEED_TEST : 10 000 000 malloc(1)
	
	malloc : 0.933s
	gc_alloc (blocksize = 64): 1.57s
	__malloc (old version) : 2.77s

	SPEED_TEST : 10 000 000 malloc(1) then free	

	malloc : 1.68s
	gc_alloc (blocksize = 64): 2.95s
	__malloc (old version) : 4.68s

	SPEED_TEST : 10 000 000 malloc(100) then free 1 on 3
	
	malloc : 2.66s
	gc_alloc (blocksize = 64): 3.44s
	__malloc (old version) : time out

*/
