/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 10:38:42 by yel-alja          #+#    #+#             */
/*   Updated: 2024/11/21 15:32:00 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	unsigned long	nb;
	int				count;

	count = 0;
	if (!ptr)
	{
		count += ft_putstr("(nil)");
		return (count);
	}
	nb = (unsigned long)ptr;
	count += ft_putstr("0x");
	count += ft_puthexa(nb);
	return (count);
}
// #include <stdio.h>
// int main() {
//     int i = 545;
//     int *x = &i;

//     ft_putptr(x);

//     printf("\n");
//     printf("%p", x);

//     return (0);
// }
