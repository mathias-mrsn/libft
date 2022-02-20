/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_extention.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:41:42 by mathias           #+#    #+#             */
/*   Updated: 2022/02/20 11:43:14 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define STR_NULL	"filename or extention is NULL"
#define BIGGER		"extention is bigger than file"
#define FORMAT		"extention format is incorrect"
#define IS_FALSE	"file don't have the right extention"

t_boolean
	__file_extention(char *file, char *extention)
{
	if (NULL == file || NULL == extention)
		return (__lib_output(__FILE__, __LINE__, STR_NULL), __FALSE);
	if (__strlen(file) <= __strlen(extention))
		return (__lib_output(__FILE__, __LINE__, BIGGER), __FALSE);
	if (extention[0] != '.' || __str_is(extention + 1, __IS_ALPHA | __IS_DIGIT))
		return (__lib_output(__FILE__, __LINE__, FORMAT), __FALSE);
	if (0 == __strcmp(file + __strlen(file) - __strlen(extention), extention))
		return (__TRUE);
	return (__lib_output(__FILE__, __LINE__, IS_FALSE), __FALSE);
}
