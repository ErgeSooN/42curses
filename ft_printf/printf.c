/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman <ayaman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 14:06:19 by ayaman            #+#    #+#             */
/*   Updated: 2022/05/09 17:35:49 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"


int ft_putchar(char a)
{
    write(1, &a, 1);
    return (1);
}

int ft_putstr(char *str)
{
    int sayac;

    sayac = 0;
    if (!str)
        return(write(1, "(null)", 6));
    while (str[sayac])
        write(1, str + sayac++, 1);
    return (sayac);
}
static int	write_hex(unsigned long long nbr, char x)
{
	int	i = 0;

	if (!(nbr <= 15))
	{
		i += write_hex(nbr / 16, x);
	}
	if (x == 'x')
		i += write(1,&HEXA_SMALL[nbr % 16],1);
	else if (x == 'X')
		i += write(1,&HEXA_BIG[nbr % 16],1);
	return (i);
}

