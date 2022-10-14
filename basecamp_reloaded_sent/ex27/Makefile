# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 05:27:50 by jbillet           #+#    #+#              #
#    Updated: 2022/04/02 06:04:50 by jbillet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_putstr.c srcs/ft_display_file.c srcs/main.c
OBJS = out/ft_putstr.o out/ft_display_file.o out/main.o
INCS = includes
NAME = ft_display_file
CC_AND_FLAGS = gcc -Wall -Wextra -Werror

run : out ft_putstr.o main.o ft_display_file.o ${NAME}

${NAME} : ${OBJS}
		${CC_AND_FLAGS} ${OBJS} -o $@

out :
		mkdir -p out

clean :
		rm -rf ${OBJS} out/

fclean : clean
		rm -rf ${NAME}

all : run ${NAME}

re : fclean all

ft_putstr.o : out
		${CC_AND_FLAGS} -c srcs/${@:.o=.c} -I ${INCS} -o out/$@

main.o : out ft_putstr.o
		${CC_AND_FLAGS} -c srcs/${@:.o=.c} -I ${INCS} -o out/$@

ft_display_file.o : out
		${CC_AND_FLAGS} -c srcs/${@:.o=.c} -I ${INCS} -o out/$@
