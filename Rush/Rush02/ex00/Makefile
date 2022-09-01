# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mle-duc <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/24 14:39:08 by mle-duc           #+#    #+#              #
#    Updated: 2022/08/28 21:35:57 by mle-duc          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(addprefix srcs/, ft_print_name.c ft_print_name_aux.c dict_content.c dict_edit.c main.c putstdout.c string.c ft_dict_sort.c utils.c ft_split.c)

INCLUDES = includes/

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g3

RM = rm -f

NAME = rush-02

all: ${NAME}

.c.o:
	${CC} ${CFLAGS} -c -I includes $< -o ${<:.c=.o}

${NAME}:
	${CC} ${CFLAGS} -o ${NAME} -I ${INCLUDES} ${SRCS}

debug:
	${CC} ${CFLAGS} -g -o ${NAME} -I ${INCLUDES} ${SRCS}

valgrind:
	valgrind --leak-check=full ./rush-02 105

noflag:
	${CC} -o ${NAME} -I ${INCLUDES} ${SRCS}

clean:
	${RM} ${NAME}

fclean: clean

clearall:
	clear

re: clearall fclean all
.PHONY: all clean fclean re
