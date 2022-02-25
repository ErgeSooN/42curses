/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman <ayaman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:06:24 by ayaman            #+#    #+#             */
/*   Updated: 2022/02/23 00:52:59 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//s1 ve s2 yi birleştirip 

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*returnn;

	if (!s1 && !s2)
		return (ft_strdup(0));
	if (s1 && !s2)
		return ((char *)s1);
	if (!s1 && s2)
		return ((char *)s2);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	returnn = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!returnn)
		return (0);
	ft_memmove(returnn, (void *)s1, s1_len);
	ft_memmove(returnn + s1_len, (void *)s2, s2_len);
	returnn[s1_len + s2_len] = '\0';
	return (returnn);
}

#include <stdio.h>

int main()
{
	char *s1 = "";
	char *s2 = "fghjkl";

	printf("%s", ft_strjoin(s1, s2));
}

