/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman <ayaman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 11:00:24 by ayaman            #+#    #+#             */
/*   Updated: 2022/02/10 16:39:57 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_strncmp(const char *s_1, const char *s_2, size_t n)
{
	size_t	index;

	if (!s_1 && !s_2)
		return (0);
	index = 0;
	if (n == 0)
		return (0);
	while ((s_1[index] && s_2[index]) != '\0'
		&& index < n - 1 && s_1[index] == s_2[index])
		index++;
	return ((unsigned char)s_1[index] - (unsigned char)s_2[index]);
}

/*int main(void)
{
	char *s1;
	char *s2;
	int n =5;

	s1="ahmed";
	s2="ahmet";

	printf("%d", strncmp(s1,s2,n));
}*/
