/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 12:48:07 by mamaurai          #+#    #+#             */
/*   Updated: 2021/11/26 13:00:31 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct s_file
{
	int				fd;
	long			readed_len;
	char			*save;
	struct s_file	*next;
}					t_file;

char	*ft_get_save(char *src);
char	*get_next_line(int fd);
int		ft_is_line(char c, char *set);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *src);

#endif
