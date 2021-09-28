# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: osmith <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/21 15:31:37 by osmith            #+#    #+#              #
#    Updated: 2021/09/21 15:34:42 by osmith           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS 	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS	= ${SRCS:.c=.o}
OPTI	= -Wall -Wextra -Werror
LIB		= libft.a

all:	${LIB}

${LIB}:${OBJS}	
	ar -rc ${LIB} ${OBJS}

.c.o:
	gcc ${OPTI} -I includes -c $< -o $(<:.c=.o)

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${LIB}

re: fclean all

