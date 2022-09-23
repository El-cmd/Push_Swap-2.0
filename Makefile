CC = clang 
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror -g
NAME =	push_swap
LIBFT = ./LIBFT/MAKEFILE
SRCS =	./srcs/data.c \
	./srcs/main.c \
	./srcs/parsing.c \
	./srcs/printlist.c \
	./operations/push.c \
	./operations/rotate.c \
	./operations/swap.c \

     
OBJS = ${SRCS:.c=.o}


all:	${NAME}

${NAME}: ${OBJS}
		${AR} ${NAME} ${OBJS}

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY:	all clean fclean re

