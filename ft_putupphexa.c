/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putupphexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 10:16:53 by yel-alja          #+#    #+#             */
/*   Updated: 2024/11/19 17:04:52 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putupphexa(unsigned int nb)
{
	char	*hex;
	int		count;

	hex = "0123456789ABCDEF";
	count = 0;
	if (nb >= 16)
		count += ft_putupphexa(nb / 16);
	count += ft_putchar(hex[nb % 16]);
	return (count);
}

// #include <stdio.h>
// int main()
// {
//     int i = 2345555556;
//     int im = ft_putupphexa(i);
//     int it = printf("\n%X", i);
//     printf("\nim  %d it  %d",im ,it);
// }