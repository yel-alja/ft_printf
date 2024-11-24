/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-alja <yel-alja@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 22:02:36 by yel-alja          #+#    #+#             */
/*   Updated: 2024/11/21 15:37:24 by yel-alja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putnbr(int n);
int	ft_putstr(char *str);
int	ft_putchar(int c);
int	ft_put_un_nbr(unsigned int n);
int	ft_putupphexa(unsigned int nb);
int	ft_puthexa(unsigned long nb);
int	ft_putptr(void *ptr);
#endif
