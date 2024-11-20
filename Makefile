/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 22:02:36 by yel-alja          #+#    #+#             */
/*   Updated: 2024/11/19 17:05:07 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

FUNCTIONS = ft_put_un_nbr.c ft_putchar.c ft_putnbr.c ft_putstr.c \
			ft_puthexa.c ft_putupphexa.c ft_putptr.c ft_printf.c


SRC = ${FUNCTIONS}
OBJS = ${SRC:%.c=%.o}
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

all : $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re: fclean all
.PHONY : all clean fclean re
