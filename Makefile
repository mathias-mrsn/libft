# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/20 10:02:52 by mamaurai          #+#    #+#              #
#    Updated: 2022/01/25 16:15:15 by mamaurai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ${shell find . -name "*.c"}

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
INCS = includes
OBJ_DIR = objs
SYSTEM = ${shell uname}

OBJS = ${SRCS:%.c=%.o}

# Colors
ifeq (${SYSTEM}, Darwin)
_END=$'\x1b[0m
_BOLD=$'\x1b[1m
_UNDER=$'\x1b[4m
_REV=$'\x1b[7m
_GREY=$'\x1b[30m
_RED=$'\x1b[31m
_GREEN=$'\x1b[32m
_YELLOW=$'\x1b[33m
_BLUE=$'\x1b[34m
_PURPLE=$'\x1b[35m
_CYAN=$'\x1b[36m
_WHITE=$'\x1b[37m
endif

ifeq (${SYSTEM}, Linux)
_GREY=	$'\033[30m
_RED=	$'\033[31m
_GREEN=	$'\033[32m
_YELLOW=$'\033[33m
_BLUE=	$'\033[34m
_PURPLE=$'\033[35m
_CYAN=	$'\033[36m
_WHITE=	$'\033[37m
_END= $'\033[37m
endif

all: ${NAME}

.c.o :
			@${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}
			@printf "%-15s ${_YELLOW}${_BOLD}$<${_END}...\n" "Compiling"

$(NAME): $(OBJS)
			@printf "%-15s ${_PURPLE}${_BOLD}${NAME}${_END}...\n" "Compiling"
			@ar -rcs $(NAME) $(OBJS)
			@printf "\n${_GREEN}${_BOLD}Compilation done !${_END}\n"

clean:
			@printf "%-15s ${_RED}${_BOLD}binary files${_END}...\n" "Deleting"
			@${RM} ${OBJS} ${OBJSBONUS}

fclean: clean
			@printf "%-15s ${_RED}${_BOLD}libft librairy${_END}...\n" "Deleting"
			@${RM} ${NAME}

re: fclean all

.PHONY:		all clean fclean re