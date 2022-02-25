/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman <ayaman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:07:49 by ayaman            #+#    #+#             */
/*   Updated: 2022/02/23 00:36:12 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//s dizisine *f fonksiyonunu kullanıyo.

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	ft_ft(unsigned int i, char *a)
{
	*a = *a + i;
}
int	main()
{
	char	a[] = "aaaaaa";
	ft_striteri(a, &ft_ft);
	printf("%s", a);
}*/
