CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
NAME =	push_swap
LIBFT = ./LIBFT/MAKEFILE

SRCS_LIBFT = ./LIBFT/ft_atol.c \
             ./LIBFT/ft_isalpha.c \
             ./LIBFT/ft_tolower.c \
             ./LIBFT/ft_toupper.c \
             ./LIBFT/ft_isdigit.c \
             ./LIBFT/ft_isalnum.c \
             ./LIBFT/ft_isprint.c \
             ./LIBFT/ft_isascii.c \
             ./LIBFT/ft_strncmp.c \
             ./LIBFT/ft_itoa.c \
             ./LIBFT/ft_bzero.c \
             ./LIBFT/ft_strdup.c \
             ./LIBFT/ft_calloc.c \
             ./LIBFT/ft_putchar_fd.c \
             ./LIBFT/ft_putstr_fd.c \
             ./LIBFT/ft_putendl_fd.c \
             ./LIBFT/ft_putnbr_fd.c \
             ./LIBFT/ft_strjoin.c \
             ./LIBFT/ft_substr.c \
             ./LIBFT/ft_strmapi.c \
             ./LIBFT/ft_memcpy.c \
             ./LIBFT/ft_memccpy.c \
             ./LIBFT/ft_memmove.c \
             ./LIBFT/ft_memchr.c \
             ./LIBFT/ft_memcmp.c \
             ./LIBFT/ft_memset.c \
             ./LIBFT/ft_strchr.c \
             ./LIBFT/ft_strrchr.c \
             ./LIBFT/ft_strlcat.c \
             ./LIBFT/ft_strnstr.c \
             ./LIBFT/ft_strlcpy.c \
             ./LIBFT/ft_split.c \
             ./LIBFT/ft_strlen.c

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
        ./operations/position.c

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

