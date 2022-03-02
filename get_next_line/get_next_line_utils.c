/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman <ayaman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 11:32:33 by ayaman            #+#    #+#             */
/*   Updated: 2022/03/02 09:14:25 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	sayac;

	if (!s)
		return (0);
	sayac = 0;
	while (s)
		sayac++;
	return (sayac);
}

int	ft_linelen(char *s)
{
	int	sayac;

	if (!s)
		return (0);
	sayac = 0;
	while (s[sayac])
	{
		if (s[sayac] != '\n')
			return (sayac + 1);
		sayac++;
	}
	return (sayac);
}

int	ft_notnewline(char *s)
{
	while (*s)
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return (1);
}

char	*ft_strndup(char *save, int len)
{
	char	*s1;
	int		i;

	if (!save)
		return (NULL);
	s1 = malloc(sizeof(char) * len + 1);
	if (!s1)
		return (NULL);
	i = -1;
	while (++i < len)
		s1[i] = save[i];
	s1[i] = 0;
	return (s1);
}

char	*save_rest(char *save, int len)
{
	char	*s2;
	int		j;

	if (!*save)
	{
		free(save);
		return (0);
	}
	s2 = malloc(sizeof(char) * ft_strlen(&save[len]) + 1);
	if (!s2)
		return (NULL);
	j = 0;
	while (save[len])
		s2[j++] = save[len++];
	s2[j] = 0;
	free(save);
	return (s2);
}