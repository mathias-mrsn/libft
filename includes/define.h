/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:03:25 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/06 15:58:56 by mamaurai         ###   ########.fr       */
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

# ifndef BUFFER_STACK
#  define BUFFER_STACK 100
# endif

# ifndef __DONT_STOCK_MEM
#  define __DONT_STOCK_MEM 0
# endif

# ifndef __LIBFT_FAILURE_LOCATED
#  define __LIBFT_FAILURE_LOCATED 0
# endif

# ifndef SYSCALL_ERR
#  define SYSCALL_ERR	(-1)
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

/*
**	MATH
*/

# define T_PI_4 	0.78539816339744830961566084581987572
# define T_PI_2 	1.57079632679489661923132169163975144
# define T_PI 		3.14159265358979323846264338327950288
# define T_3PI_2	4.71238898038468967399694520281627774
# define T_2PI 		6.28318530717958623199592693708837032

#endif
