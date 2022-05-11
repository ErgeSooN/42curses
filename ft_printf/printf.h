/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman <ayaman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 14:06:30 by ayaman            #+#    #+#             */
/*   Updated: 2022/05/11 15:14:28 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define HEXA_SMALL  "0123456789abcdef"
# define HEXA_BIG  "0123456789ABCDEF"
# define DECI "0123456789"

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

int ft_printf(const char *str, ...);
static int	write_hex(unsigned long long nbr, char x);
static int	write_dec(long long nbr);
int ft_putnbr(int nbr);
int ft_putstr(char *str);
int ft_putchar(char a);
int ft_format(char a, va_list arg);


#endif