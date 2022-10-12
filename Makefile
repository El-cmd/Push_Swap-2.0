CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
NAME =	push_swap
LIBFT = ./LIBFT/MAKEFILE

SRCS_LIBFT = ./LIBFT/ft_atol.c \
             ./LIBFT/ft_isascii.c \
             ./LIBFT/ft_isalpha.c \
             ./LIBFT/ft_isdigit.c \
             ./LIBFT/ft_isalnum.c \
             ./LIBFT/ft_isprint.c \
             ./LIBFT/ft_putchar_fd.c \
             ./LIBFT/ft_putstr_fd.c \
             ./LIBFT/ft_strlen.c \

SRCS_PUSHSWAP =	./srcs/data.c \
		./srcs/main.c \
		./srcs/parsing.c \
		./srcs/parsing_2.c \
		./operations/push.c \
		./operations/rotate.c \
		./operations/swap.c \
		./operations/reverse.c \
		./algo/small_sort.c \
        ./srcs/check_arg.c \
        ./algo/five_sort.c \
        ./srcs/position.c \
        ./algo/big_sort.c \
        ./algo/execution.c

OBJS_PUSHSWAP = ${SRCS_PUSHSWAP:.c=.o}

OBJS_LIBFT = ${SRCS_LIBFT:.c=.o}


all:	${NAME}

${NAME}: ${OBJS_PUSHSWAP} ${OBJS_LIBFT}
		${CC} ${OBJS_PUSHSWAP} ${OBJS_LIBFT} -o ${NAME}

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f ${OBJS_LIBFT} ${OBJS_PUSHSWAP}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY:	all clean fclean re

test3:		$(NAME)	
		$(eval ARG = $(shell shuf -i 0-50 -n 3))
		./push_swap $(ARG) | ./checker_linux $(ARG)
		@echo -n "Instructions: "
		@./push_swap $(ARG) | wc -l

test5:		$(NAME)	
		$(eval ARG = $(shell shuf -i 0-50 -n 5))
		valgrind ./push_swap $(ARG)
	
test100:	$(NAME)	
		$(eval ARG = $(shell shuf -i 0-1000 -n 100))
	    valgrind ./push_swap $(ARG) | ./checker_linux $(ARG)

test500:	$(NAME)	
		$(eval ARG = $(shell shuf -i 0-2000 -n 500))
		./push_swap $(ARG) | ./checker_linux $(ARG)