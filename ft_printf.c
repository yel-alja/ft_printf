/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 22:26:18 by yel-alja          #+#    #+#             */
/*   Updated: 2024/11/20 17:42:21 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	fprin(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (c == 'x')
		count += ft_puthexa(va_arg(args, unsigned int));
	else if (c == 'X')
		count += ft_putupphexa(va_arg(args, unsigned int));
	else if (c == 'u')
		count += ft_put_un_nbr(va_arg(args, unsigned int));
	else if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		count += ft_putptr(va_arg(args, void *));
	else if (c == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	int		i;

	i = 0;
	count = 0;
	if (!str)
		return (-1);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += fprin(str[i + 1], args);
			i++;
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
// #include <stdio.h>
// int main()
// {
//    unsigned int j = 1165461;
//     int *l = &j;
// 	char tt[] = "ythguthgruhgriurtghut";
//     int thostyping = printf("%s,hhshshshshshsh%d\n",tt,j);
// int minetyping = ft_printf ("%s,hhshshshshshsh%d\n",tt,j);
//     printf("mine %d not mine %d\n",thostyping,minetyping);
// }