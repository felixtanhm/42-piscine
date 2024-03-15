#Variables
NAME = do_op
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SOURCES = ${wildcard ./srcs/*.c}
OBJECTS = ${SOURCES:.c=.o}
HEADERS = includes

#Rules
${NAME}:
	${CC} ${CFLAGS} -I ${INCLUDES} -c $< -o ${<:.c=.o}

