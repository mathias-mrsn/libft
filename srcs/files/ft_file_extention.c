/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_extention.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathias <mathias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:41:42 by mathias           #+#    #+#             */
/*   Updated: 2022/02/19 19:04:05 by mathias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_boolean
	__file_extention(char *file, char *extention)
{
	if (NULL == file || NULL == extention)
		return (__FALSE);
	if (__strlen(file) <= __strlen(extention))
		return (__FALSE);
	if (extention[0] != '.' || __str_is(extention + 1, __IS_ALPHA | __IS_DIGIT))
		return (__FALSE);
	if (0 == __strcmp(file + __strlen(file) - __strlen(extention), extention))
		return (__TRUE);
	return (__FALSE);
}
