# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: osmith <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/22 09:40:31 by osmith            #+#    #+#              #
#    Updated: 2021/09/23 14:47:00 by osmith           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= ft_display_file.c
OBJS	= ${SRCS:.c=.o}
OPTI	= -Wall -Wextra -Werror
NAME	= ft_display_file

all:	${NAME}

${NAME}:${OBJS}
		gcc -o ${NAME} ${OBJS}

.c.o:
	gcc ${OPTI} -I includes -c $< -o $(<:.c=.o)

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}


