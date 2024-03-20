# Variables
NAME = do-op

CC = cc
CFLAGS = -Wall -Wextra -Werror -I ${HEADERS}

SOURCES = ${wildcard ./srcs/*.c} ./main.c
OBJECTS = ${SOURCES:.c=.o}
HEADERS = includes

# Rules
all: ${NAME}
${NAME}: ${OBJECTS}
	${CC} ${CFLAGS} $^ -o $@
clean:
		${RM} ${OBJECTS}
fclean: clean
		${RM} ${NAME}
re: fclean all
