/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman <ayaman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:20:40 by ayaman            #+#    #+#             */
/*   Updated: 2022/02/22 19:12:17 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ret;
	size_t	index;

	ret = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!ret)
		return (0);
	index = 0;
	while (s1[index])
	{
		ret[index] = s1[index];
		index++;
	}
	ret[index] = '\0';
	return (ret);
}
