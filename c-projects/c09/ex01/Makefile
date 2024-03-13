# Makefile Vars
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SOURCES = $(wildcard ./srcs/*.c)
OBJECTS = ${notdir $(SOURCES:.c=.o)}
HEADERS = includes
LIBC = ar rcs
LIBR = ranlib

# Rules
.c.o:
	${CC} ${CFLAGS} -I ${HEADERS} -c ${SOURCES} -o ${OBJECTS}
${NAME}: ${OBJECTS}
			${LIBC} ${NAME} ${OBJECTS}
			${LIBR} ${NAME}
all: ${NAME}
clean:
		${RM} ${OBJECTS}
fclean: clean
		${RM} ${NAME}
re: fclean all

