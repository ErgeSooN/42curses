/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman <ayaman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:52:23 by ayaman            #+#    #+#             */
/*   Updated: 2022/02/09 10:50:34 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	k;
	size_t	l;
	size_t	src_len;
	size_t	dest_len;

	l = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (destsize == 0)
		return (src_len);
	if (destsize < dest_len)
		return (src_len + destsize);
	else
	{
		k = dest_len;
		while (src[l] && (dest_len + l) < destsize)
			dest[k++] = src[l++];
		if ((dest_len + l) == destsize && dest_len < destsize)
			dest[--k] = '\0';
		else
			dest[k] = '\0';
		return (src_len + dest_len);
	}
}
