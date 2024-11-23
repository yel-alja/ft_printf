/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_un_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 09:32:58 by yel-alja          #+#    #+#             */
/*   Updated: 2024/11/19 18:07:09 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_un_nbr(unsigned int n)
{
	int	i;

	i = 0;
	if (n > 9)
	{
		i += ft_put_un_nbr(n / 10);
		i += ft_put_un_nbr(n % 10);
	}
	else
	{
		i += ft_putchar(n + 48);
	}
	return (i);
}
// #include <limits.h>
// int main()
// {
//     int i = ft_put_un_nbr(9);
//     printf("\n%d\n",i);
// }