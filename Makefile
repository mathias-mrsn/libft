SRCS =	./srcs/ft_strnstr.c \
		./srcs/ft_isdigit.c \
		./srcs/ft_putstr_fd.c \
		./srcs/ft_random.c \
		./srcs/ft_strlcpy.c \
		./srcs/ft_strlen.c \
		./srcs/ft_memcmp.c \
		./srcs/ft_putnbr_fd.c \
		./srcs/ft_strchr.c \
		./srcs/ft_bzero.c \
		./srcs/ft_strjoin.c \
		./srcs/ft_isascii.c \
		./srcs/ft_memcpy.c \
		./srcs/ft_memccpy.c \
		./srcs/ft_strcat.c \
		./srcs/ft_isprint.c \
		./srcs/ft_putendl_fd.c \
		./srcs/ft_is_charset.c \
		./srcs/ft_toupper.c \
		./srcs/ft_split.c \
		./srcs/ft_printf/ft_printf_bonus.c \
		./srcs/ft_printf/tools_bonus.c \
		./srcs/ft_printf/parse2_bonus.c \
		./srcs/ft_printf/tools2_bonus.c \
		./srcs/ft_printf/print_arg_bonus.c \
		./srcs/ft_printf/print_flag_bonus.c \
		./srcs/ft_printf/parse_bonus.c \
		./srcs/ft_strrchr.c \
		./srcs/ft_isalpha.c \
		./srcs/ft_memchr.c \
		./srcs/ft_putaddr_fd.c \
		./srcs/ft_putchar_fd.c \
		./srcs/ft_memset.c \
		./srcs/ft_substr.c \
		./srcs/ft_strncmp.c \
		./srcs/ft_strmapi.c \
		./srcs/ft_strtrim.c \
		./srcs/ft_memmove.c \
		./srcs/ft_strlcat.c \
		./srcs/ft_calloc.c \
		./srcs/get_next_line/get_next_line_utils.c \
		./srcs/get_next_line/get_next_line.c \
		./srcs/ft_strdup.c \
		./srcs/ft_atoi.c \
		./srcs/ft_isalnum.c \
		./srcs/ft_putnstr.c \
		./srcs/ft_itoa.c \
		./srcs/ft_tolower.c

OBJS = ${SRCS:.c=.o}
SRCSBONUS =	srcs/bonus/ft_lstnew.c \
			srcs/bonus/ft_lstadd_front.c \
			srcs/bonus/ft_lstsize.c \
			srcs/bonus/ft_lstlast.c \
			srcs/bonus/ft_lstadd_back.c \
			srcs/bonus/ft_lstdelone.c \
			srcs/bonus/ft_lstclear.c \
			srcs/bonus/ft_lstiter.c \
			srcs/bonus/ft_lstmap.c

OBJSBONUS	= ${SRCSBONUS:.c=.o}
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
INCS = includes

_END=$'\x1b[0m
_BOLD=$'\x1b[1m
_UNDER=$'\x1b[4m
_REV=$'\x1b[7m

# Colors
_GREY=$'\x1b[30m
_RED=$'\x1b[31m
_GREEN=$'\x1b[32m
_YELLOW=$'\x1b[33m
_BLUE=$'\x1b[34m
_PURPLE=$'\x1b[35m
_CYAN=$'\x1b[36m
_WHITE=$'\x1b[37m

all: ${NAME}

.c.o:
			@${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

$(NAME): $(OBJS)
			@ echo "${_GREEN}libft.a compiled${_END}"
			@ar -rcs $(NAME) $(OBJS)


bonus: ${OBJS} ${OBJSBONUS}
			@ar -rcs ${NAME} ${OBJS} ${OBJSBONUS}

clean:
			@ echo "${_RED}Deleting libft's objects${_END}"
			@${RM} ${OBJS} ${OBJSBONUS}

fclean: clean
			@ echo "${_RED}Deleting libft's library${_END}"
			@${RM} ${NAME}

re: fclean all

.PHONY:		bonus all clean fclean re%