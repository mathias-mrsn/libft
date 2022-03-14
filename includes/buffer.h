/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:11:22 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/14 11:29:44 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUFFER_H
# define BUFFER_H

/*

	Thank you to besellem to the idea
	Those functions are reproductions of the functions from his own libft
	His github : https://github.com/besellem

*/

# define BUFFER_SIZE	2048

enum	t_buffer_flags
{
	DESTROY_BUF = 1U << 0
};

typedef struct s_buffer
{
	int		fd;
	char	buffer[BUFFER_SIZE];
	size_t	index;
}			t_buffer;

typedef struct s_buf_attr
{
	uint32_t	flags;
	int32_t		fd;	
}			t_buf_attr;

/*
	print the buffer even if it isn't full and destroy the buffer
*/

int			__flush_buffer(void);

/*
	free the buffer memory and set the buffer at NULL
*/

void		__destroy_buffer(void);

/*
	create a buffer if it doesn't already exist
*/

t_buffer	*__init_buffer(const t_buf_attr *attr);

/*
	reset each buffer character at 0 and reset the index value at 0
*/

void		__reset_buffer(void);

/*
	add only one character to the buffer and print the buffer if it's full
*/

int			__add_buffer_c(char c);

/*
	add a string to the buffer and print the buffer if the string can't be copied
*/

int			__add_buffer_s(char *str);

#endif