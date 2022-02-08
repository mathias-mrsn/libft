/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:03:25 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/08 18:08:07 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINE_H
# define DEFINE_H

# ifndef __STDIN
#  define __STDIN 	0
# endif

# ifndef __STDERR
#  define __STDERR 	2
# endif

# ifndef __STDOUT
#  define __STDOUT 	1
# endif

# ifndef __FAILURE
#  define __FAILURE 	1
# endif

# ifndef __SUCCESS
#  define __SUCCESS 	0
# endif

# ifndef __ERROR
#  define __ERROR 	(-1)
# endif

# ifndef __TRUE
#  define __TRUE 	1
# endif

# ifndef __FALSE
#  define __FALSE 	0
# endif

# ifndef OPEN_ERROR
#  define OPEN_ERROR (-1)
# endif

# ifndef MALLOC_LIST_SIZE
#  define MALLOC_LIST_SIZE 128
# endif

# ifndef BUFFER_READ
#  define BUFFER_READ 1024
# endif

# ifndef STANDARD_STACK
#  define STANDARD_STACK 1
# endif

# ifndef __DONT_STOCK_MEM
#  define __DONT_STOCK_MEM 0
# endif

/*
**	STR_IS
*/

# define __IS_ALPHA 2
# define __IS_DIGIT 8
# define __IS_ASCII 32
# define __IS_EMPTY 128
# define __IS_PRINTABLE 512
# define __IS_LOWER  2048
# define __IS_UPPER 8192

#endif
