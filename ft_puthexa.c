/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 09:45:20 by yel-alja          #+#    #+#             */
/*   Updated: 2024/11/19 16:56:29 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long nb)
{
	char	*hex;
	int		count;

	hex = "0123456789abcdef";
	count = 0;
	
	if (nb >= 16)
		count += ft_puthexa(nb / 16);
	count += ft_putchar(hex[nb % 16]);
	return (count);
}
//  #include <stdio.h>
//  #include <limits.h>
//  int main()
//  {
//      int i = 13245678;
//      int im = ft_puthexa(i);
//  	printf("\n");
//      int it = printf("%x", i);
//      printf("\nim  %d it  %d",im ,it);
//      }
