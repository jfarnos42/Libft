NAME = libft.a
SRC = 	ft_calloc.c ft_atoi.c ft_strnstr.c ft_putchar.c ft_bzero.c \
		ft_isalnum.c  ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c  ft_strlcpy.c \
		ft_strlcat.c  ft_strlen.c ft_strncmp.c ft_strrchr.c  ft_tolower.c \
		ft_toupper.c ft_memcmp.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
		ft_split.c
OBJ_DIR = obj
OBJ	= $(addprefix ${OBJ_DIR}/, ${SRC:%.c=%.o})

FLAGS	=	-Wall -Werror -Wextra

all: ${NAME}

${OBJ_DIR}/%.o:./%.c
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