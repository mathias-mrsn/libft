/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:24:55 by mamaurai          #+#    #+#             */
/*   Updated: 2022/02/26 14:08:40 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTION_H
# define FUNCTION_H

/*
**	MATH
*/

size_t		__power(size_t nb, int power);
size_t		__fibonacci(int index);
int			__abs(int x);
long		__labs(long x);
int			__max(int x, int y);
int			__min(int x, int y);
int64_t		__llabs(int64_t x);
long		__random(int len_max);
t_boolean	__is_prime(size_t nb);

/*
**	CHAR
*/

int			__isascii(int c);
int			__isalnum(int c);
int			__isalpha(int c);
int			__isdigit(int c);
int			__isprint(int c);
int			__tolower(int c);
int			__islower(int c);
int			__isupper(int c);
int			__toupper(int c);
int			__isempty(int c);
int			__is_charset(char c, char *set);

/*
**	LIST
*/

typedef struct s_list
{
	void			*content;
	size_t			id;
	struct s_list	*next;
}				t_list;

size_t		__lstsize(t_list *lst);
t_list		*__lstlast(t_list *lst);
t_list		*__lstnew(void *content, size_t id);
void		__lstadd_back(t_list **alst, t_list *new);
void		__lstiter(t_list *lst, void (*f)(void *));
void		__lstadd_front(t_list **alst, t_list *new);
void		__lstclear(t_list **lst, void (*del)(void*));
void		__lstdelone(t_list *lst, void (*del)(void*));
t_list		*__lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void		__list_remove(t_list **begin_list, void *data_ref);
t_list		*__lst_push_strs(int size, char **strs);
t_list		*__lst_at(t_list *begin_list, unsigned int nbr);
void		__lst_reverse(t_list *begin_list);
void		__lst_merge(t_list **begin_list1, t_list *begin_list2);
void		__lst_sort(t_list **begin_list, int (*cmp)());

/*
**	MALLOC
*/

size_t		__mem_stack_len(size_t list_stack);
void		__clean(size_t list_nbr);
int8_t		__free(void	*addr);
void		*__malloc(size_t count, size_t list_nbr);
void		__clean_all(void);
void		__print_memory(void);
t_boolean	__is_in_stack(void *ptr, size_t list_stack);
size_t		__is_in_my_memory(void *ptr);

/*
**	MEMORY
*/

void		__memswap(void	**s1, void	**s2);
void		__strsfree(char **tab);
void		__bzero(void *b, size_t len);
void		*__calloc(size_t count, size_t size);
void		*__memset(void *b, int c, size_t len);
void		__memdel(void **p);
void		*__memchr(const void *s, int c, size_t n);
void		*__memcpy(void *dst, const void *src, size_t n);
int			__memcmp(const void *s1, const void *s2, size_t n);
void		*__memmove(void *dst, const void *src, size_t len);
void		*__memccpy(void *dst, const void *src, int c, size_t n);

/*
**	ERROR / EXIT
*/

void		__malloc_error(int line, char *file, size_t size);
void		__lib_output(char *file, int line, char *msg);
void		__exit(int exit_code);

/*
**	PRINT
*/

void		__putnbr(int64_t n, int fd);
void		__putunbr(size_t n, int fd);
void		__putchar(char c, int fd);
void		__putstr(char *s, int fd);
void		__putendl(char *s, int fd);
void		__putaddr(void *addr, int fd);
void		__putnstr(char *str, int fd, size_t len);
void		__puterr(char *err_msg);
void		__putstrs(char *title, char **strs, int fd);
t_boolean	__putfile(char *filename, int fd_output);

/*
**	STDLIB
*/

char		*__itoa(int64_t n);
int			__nbrlen(int64_t nbr);
int			__atoi(const char *str);
long		__atol(const char *str);
int64_t		__atoll(const char *str);
int			__nbrlen_base(int64_t nbr, char *base);

char		*__mitoa(int64_t n, size_t list_stack);

/*
**	STRING
*/

char		*__strupcase(char *str);
char		*__strlowcase(char *str);
char		*__strdup(const char *src);
size_t		__strlen(const char *str);
char		*__strchr(const char *s, int c);
char		*__strrchr(const char *s, int c);
char		**__splitcs(char *str, char *charset);
char		**__split(const char *str, char c);
int			__str_is_in(char *str, char *to_find);
int			__strcmp(const char *s1, const char *s2);
char		*__strtrim(const char *s1, const char *set);
size_t		__strclen(const char *str, const char c);
char		*__strldup(char *str, size_t len);
char		*__strjoin(char const *s1, char const *s2);
int			__strncmp(const char *s1, const char *s2, size_t n);
size_t		__str_count(char *str, char c);
size_t		__str_count_cs(const char *str, const char *charset);
int			__str_start_with(char *str, char *to_find);
int			__str_end_with(char *str, char *to_find);
void		__striteri(char *s, void (*f)(unsigned int, char*));
size_t		__strlcat(char *dest, const char *src, size_t size);
int64_t		__stridx(char *str, char *charset);
size_t		__strlcpy(char *dest, const char *src, size_t size);
size_t		__strlen_except(char *str, char *charset);
char		*__strmapi(char const *s, char (*f)(unsigned int, char));
t_boolean	__str_is(const char *str, int flags);
char		*__str_rm_cs(const char *str, const char *charset);
char		*__str_rm(const char *str, const char c);
char		*__substr(char const *s, unsigned int start, size_t len);
char		*__strnstr(const char *haystack, const char *needle, size_t len);

char		**__msplitcs(char *str, char *charset, size_t list_stack);
char		**__msplit(const char *str, char c, size_t list_stack);
char		*__mstrdup(const char *src, size_t list_stack);
char		*__mstrjoin(char const *s1, char const *s2, size_t list_stack);
char		*__mstrldup(char *str, size_t len, size_t list_stack);
char		*__mstrtrim(const char *s1, const char *set, size_t list_stack);
char		*__mstr_rm_cs(const char *str,
				const char *charset, size_t list_stack);
char		*__mstr_rm(const char *str, const char c, size_t list_stack);
char		*__msubstr(char const *s, unsigned int start,
				size_t len, size_t list_stack);

/*
**	STRS
*/

size_t		__strslen(char **strs);
int64_t		__strsidx(char **strs, char *str);
void		__sort_strs(char **tab);
t_boolean	__strs_is_sort(char **tab);
t_boolean	__strs_add_back(char ***strs, char *str);
t_boolean	__strs_add_front(char ***strs, char *str);
char		*__strs_at(char **strs, size_t at);

t_boolean	__mstrs_add_back(char ***strs, char *str, size_t list_stack);
t_boolean	__mstrs_add_front(char ***strs, char *str, size_t list_stack);

/*
**	FILES
*/

t_boolean	__file_exist(char *filename);
int			__file_create(char *filename);
int			__file_trunc(char *filename);
int			__file_append(char *filename);
t_boolean	__file_extention(char *file, char *extention);
t_boolean	__add_to_file(char *filename, char *str);
char		*__dirname(const char *path);
char		*__basename(const char *path);


/*
**	CONDIRIONS
*/

int32_t		__trn32(int condition, int32_t true, int32_t false);
uint32_t	__trnu32(int condition, uint32_t true, uint32_t false);
uint8_t		__trnu8(int condition, uint8_t true, uint8_t false);
int8_t		__trn8(int condition, int8_t true, int8_t false);	
int64_t		__trn64(int condition, int64_t true, int64_t false);
uint64_t	__trnu64(int condition, uint64_t true, uint64_t false);	
size_t		__trnst(int condition, size_t true, size_t false);
char		*__trnpc(int condition, char *true, char *false);
void		*__trnpv(int condition, void *true, void *false);
int			*__trnpi(int condition, int *true, int *false);
long double	__trnld(int condition, long double true, long double false);
double		__trnd(int condition, double true, double false);

/*
**	MLX
*/

typedef struct s_img
{
	int		x;
	int		y;
	int		size_line;
	int		bpp;
	int		endian;
	void	*ptr;
	char	*addr;
}				t_img;

void		__put_pixel_on_img(t_img *img, int x, int y, int color);
int			__get_t(int trgb);
int			__get_r(int trgb);
int			__get_g(int trgb);
int			__get_b(int trgb);
int			__create_color(unsigned char t, unsigned char r,
				unsigned char g, unsigned char b);

#endif
