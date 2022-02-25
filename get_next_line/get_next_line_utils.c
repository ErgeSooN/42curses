/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman <ayaman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 11:32:33 by ayaman            #+#    #+#             */
/*   Updated: 2022/02/25 17:42:11 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t  ft_strlen(const char *s)
{
    size_t  sayac;

    if(!s)
        return (0);
    sayac = 0;
    while (s[sayac])
    {
        sayac++;
    }
    return (sayac);
}

char    *ft_strchr(const char *s, int c)
{   
    int s_len;

    s_len = 0;

    if (!s)
        return (0);
    s_len = ft_strlen(s);
    while (s_len)
    {
        if (*s == (char)c)
            return ((char *)s);
        s++;
        s_len--;
    }
    return (0);
}
//satır 67 ve 70 de hata olabilir "-1" den başlatmayı dene!
char    *ft_strjoin(char *s1, char *s2)
{   
    size_t  sayac1;
    size_t  sayac2;
    char    *s3;


    if (!s1)
    {
       s1 = (char *)malloc(sizeof(char) * 1); 
       s1[0] = '\0';
    }
    if (!s2)
        return (NULL);
    s3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!s3)
        return (NULL);
    sayac1 = -1;
    while (s1[++sayac1])
        s3[sayac1] = s1[sayac1];
    sayac2 = -1;
    while (s2[++sayac2])
        s3[sayac1 + sayac2] = s2[sayac2];
    s3[sayac1 + sayac2] = 0;
    free(s1);
    return (s3);
}