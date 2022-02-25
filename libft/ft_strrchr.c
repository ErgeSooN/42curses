/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman <ayaman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:05:22 by ayaman            #+#    #+#             */
/*   Updated: 2022/02/24 09:56:37 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	sayac;

	sayac = ft_strlen(s);
	while (sayac >= 0)
	{
		if (s[sayac] == (char)c)
			return ((char *)(s + sayac));
		sayac--;
	}
	return (0);
}
