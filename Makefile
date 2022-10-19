CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
NAME =	push_swap
LIBFT = ./LIBFT/MAKEFILE

DIR_INC = -I ./includes/

LIBFT_DIR = ./LIBFT

SRCS_LIBFT = ft_atol.c \
             ft_isascii.c \
             ft_isalpha.c \
             ft_isdigit.c \
             ft_isalnum.c \
             ft_isprint.c \
             ft_putchar_fd.c \
             ft_putstr_fd.c \
             ft_strlen.c \

SRCS_PUSHSWAP =	initialisation.c \
		main.c \
		parsing.c \
		free.c \
		operations/push.c \
		operations/rotate.c \
		operations/swap.c \
		operations/reverse.c \
		algo/small_sort.c \
        check_arg.c \
        algo/five_sort.c \
        position.c \
        algo/big_sort.c \
        algo/execution.c \
		algo/execution2.c

SRCS_DIR = ./srcs

DIR_OBJ = 	obj

OBJS_PUSHSWAP = $(addprefix $(DIR_OBJ)/, ${SRCS_PUSHSWAP:.c=.o})

OBJS_LIBFT = 	$(addprefix $(DIR_OBJ)/, ${SRCS_LIBFT:.c=.o})

DEPS = $(OBJS_PUSHSWAP:.o=.d)

DEPS_LIBFT = $(OBJS_LIBFT:.o=.d)


-include $(DEPS)
-include $(DEPS_LIBFT)

all:	${NAME}
		make -c $(LIBFT_DIR)

${NAME}: ${OBJS_PUSHSWAP} ${OBJS_LIBFT}
		${CC} $(DIR_INC) ${OBJS_PUSHSWAP} ${OBJS_LIBFT} -o ${NAME}

$(DIR_OBJ)/%.o: $(SRCS_DIR)/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(DIR_INC) -c -o $@ $< -MMD

$(DIR_OBJ)/%.o: $(LIBFT_DIR)/%.c
	$(CC) $(CFLAGS) $(DIR_INC) -c -o $@ $< -MMD

clean:
	rm -rf ${OBJS_LIBFT} ${DIR_OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY:	all clean fclean re

test3:		$(NAME)	
		$(eval ARG = $(shell shuf -i 0-50 -n 3))
		valgrind ./push_swap $(ARG) | ./checker_linux $(ARG)
		@echo -n "Instructions: "
		@./push_swap $(ARG) | wc -l

test5:		$(NAME)	
		$(eval ARG = $(shell shuf -i 0-50 -n 5))
		valgrind ./push_swap $(ARG) | ./checker_linux $(ARG) 
		@echo -n "Instructions: "
		@./push_swap $(ARG) | wc -l

	
test100:	$(NAME)	
		$(eval ARG = $(shell shuf -i 0-1000 -n 100))
		valgrind ./push_swap $(ARG) | ./checker_linux $(ARG) 
		@echo -n "Instructions: "
		@./push_swap $(ARG) | wc -l

test500:	$(NAME)	
		$(eval ARG = $(shell shuf -i 0-2000 -n 500))
		valgrind ./push_swap $(ARG) | ./checker_linux $(ARG) 
		@echo -n "Instructions: "
		@./push_swap $(ARG) | wc -l