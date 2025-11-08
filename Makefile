SRCS = ft_printf.c ft_putadresse.c ft_putchar.c ft_puthex.c ft_putnbr.c ft_putstr.c ft_putnbru.c

OBJS = ${SRCS:.c=.o}

LIB = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

${LIB}: ${OBJS}
	ar -rcs ${LIB} ${OBJS}

all: ${LIB}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${LIB}

re: fclean all

.PHONY: all clean fclean re
