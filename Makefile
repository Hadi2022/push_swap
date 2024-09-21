NAME = push_swap

SRCS = cost.c main.c init.c moves.c position.c push.c rotate.c rrotate.c sort.c stack.c string.c swap.c three_sort.c utils.c

HEADER = ./push_swap.h

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

%o: %.c
	${CC} ${CFLAGS} -c $< -o $@

OBJS = ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS} $(HEADER)
	${CC} ${SRCS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean:
	${RM} ${OBJS}
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re