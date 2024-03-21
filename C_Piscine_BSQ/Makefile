NAME = bsq

SRCS = main.c ft_read_file.c ft_strlen_argv.c ft_putstr.c ft_count_size.c ft_arguments.c ft_cols_rows.c ft_strlen.c ft_cols.c ft_strcpy.c ft_check.c ft_memory_error_int.c ft_memory_error_char.c
OBJS = ${SRC:.c=.o}

FLAGS = -Wall -Wextra -Werror

all: ${NAME}

$(NAME): $(OBJS)
	cc -o ${NAME} ${SRCS} ${FLAGS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean
