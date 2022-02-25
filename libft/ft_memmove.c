/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman <ayaman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:30:58 by ayaman            #+#    #+#             */
/*   Updated: 2022/02/24 10:33:34 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*destination;
	char	*source;

	destination = (char *) dest;
	source = (char *) src;
	if (dest == src)
		return (dest);
	if (source < destination)
	{
		while (len--)
			*(destination + len) = *(source + len);
		return (dest);
	}
	while (len--)
		*destination++ = *source++;
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	char	a[] = "abcdabcd";
	char	b[] = "abcdabcd";
	
	printf("%s\n%s\n", ft_memcpy(a, a + 2, 4), ft_memmove(b, b + 2, 4));
}
*/
