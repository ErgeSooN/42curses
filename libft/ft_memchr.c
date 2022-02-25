/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman <ayaman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:23:56 by ayaman            #+#    #+#             */
/*   Updated: 2022/02/22 19:02:09 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//len uzunluğunda istenen karakteri ptr de arıyor

void	*ft_memchr(const void *ptr, int c, size_t len)
{
	unsigned char	*nptr;
	unsigned char	nc;

	nptr = (unsigned char *)ptr;
	nc = (unsigned char)c;
	while (len > 0)
	{
		if (*nptr == nc)
			return (nptr);
		nptr++;
		len--;
	}
	return (NULL);
}
