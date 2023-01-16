NAME = libft.a
SRC_DIR = src
SRC = ft_isalpha.c
OBJ_DIR = obj
OBJ	= $(addprefix ${OBJ_DIR}/,${SRC:%.c=%.o})

FLAGS	= -Wall -Werror -Wextra

all: ${NAME}

${OBJ_DIR}/%.o:${SRC_DIR}/%.c
	@mkdir -p ${OBJ_DIR}
	gcc ${FLAGS} -c $< -o $@

${NAME}: ${OBJ}
	ar -crs ${NAME} ${OBJ}

clean:
	rm -rf ${OBJ_DIR}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re