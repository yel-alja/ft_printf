

FUNCTIONS = ft_put_un_nbr.c ft_putchar.c ft_putnbr.c ft_putstr.c \
			ft_puthexa.c ft_putupphexa.c ft_putptr.c ft_printf.c


SRC = ${FUNCTIONS}
OBJS = ${SRC:%.c=%.o}
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

all : $(NAME)

%.o:%.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re: fclean all
.PHONY : all clean fclean re