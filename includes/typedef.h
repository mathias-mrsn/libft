/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typedef.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:00:00 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/12 16:38:18 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPEDEF_H
# define TYPEDEF_H

typedef uint8_t		t_boolean;
typedef int8_t		t_boolean_err;
typedef uint64_t	t_uvalue;
typedef int64_t		t_value;

# ifdef __SIZEOF_INT128__

typedef __int128_t	t_wide_int;
typedef __uint128_t	t_uwide_int;

# else

typedef intmax_t	t_wide_int;
typedef uintmax_t	t_uwide_int;

# endif

#endif