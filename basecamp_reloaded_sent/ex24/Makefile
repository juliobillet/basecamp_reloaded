# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbillet <jbillet@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 03:56:59 by jbillet           #+#    #+#              #
#    Updated: 2022/04/01 04:01:49 by jbillet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS = out/ft_putchar.o out/ft_putstr.o out/ft_strcmp.o out/ft_strlen.o out/ft_swap.o
INCS = includes
LIB = libft.a

run : out ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

${LIB} : ${OBJS}
		ar rcs ${LIB} ${OBJS}

out :
		mkdir -p out

clean :
		rm -rf ${OBJS}

fclean : clean
		rm -rf ${LIB}

all : run ${LIB}

re : fclean all

ft_putchar.o : out
		gcc -Wall -Wextra -Werror -c srcs/${@:.o=.c} -I ${INCS} -o out/$@

ft_putstr.o : out
		gcc -Wall -Wextra -Werror -c srcs/${@:.o=.c} -I ${INCS} -o out/$@

ft_strcmp.o : out
		gcc -Wall -Wextra -Werror -c srcs/${@:.o=.c} -I ${INCS} -o out/$@

ft_strlen.o : out
		gcc -Wall -Wextra -Werror -c srcs/${@:.o=.c} -I ${INCS} -o out/$@

ft_swap.o : out
		gcc -Wall -Wextra -Werror -c srcs/${@:.o=.c} -I ${INCS} -o out/$@
