/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_hate_norm_rules.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman <ayaman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:23:22 by ayaman            #+#    #+#             */
/*   Updated: 2022/05/12 16:57:47 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putchar(char a)
{
	return (write(1, &a, 1));
}