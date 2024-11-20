/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 10:38:42 by yel-alja          #+#    #+#             */
/*   Updated: 2024/11/19 17:53:53 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	unsigned long	nb;
	int				count;

	count = 0;
	if(!ptr)
	{
		count += ft_putstr("(nil)");
		return count;
	}
	nb = (unsigned long)ptr;
	count += ft_putstr("0x");
	count += ft_puthexa(nb);
	return (count);
}
// int main() {
//     int i = 545;
//     int *x;

//     ft_putptr(NULL);
	
//     printf("\n");
//     printf("%p", NULL);
    
//     return (0);
// }
