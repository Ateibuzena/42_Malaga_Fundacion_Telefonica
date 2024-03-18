NAME = rush-02

SRCS = main.c ft_verification.c ft_strtoll_atoi.c ft_putnbr_pro.c ft_strlen.c ft_memmove.c ft_space.c ft_upload_dict.c

OBJS = ${SRC:.c=.o}

FLAGS = -Wall -Wextra -Werror

all: ${NAME}

$(NAME): $(OBJS)
	cc -o ${NAME} ${SRCS} -Iincludes ${FLAGS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean
