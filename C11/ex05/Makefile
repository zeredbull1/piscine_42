SRCS 	= calc.c do-op.c itoa.c
OBJS	= ${SRCS:.c=.o}
OPTI	= -Wall -Wextra -Werror
NAME	= do-op

all:	${NAME}

${NAME}:${OBJS}
		gcc -o ${NAME} ${OBJS}

.c.o:
	gcc ${OPTI} -I includes -c $< -o $(<:.c=.o)

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}
