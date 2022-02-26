/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman <ayaman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 11:32:33 by ayaman            #+#    #+#             */
/*   Updated: 2022/02/26 18:49:43 by ayaman           ###   ########.fr       */
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
size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t  sayacdest;
    size_t  sayacsrc;
    size_t  index;

    sayacdest = ft_strlen(dest);
    sayacsrc = ft_strlen(src);
    sayacsrc += sayacdest;
    if (sayacdest > size)
        sayacsrc = sayacsrc - sayacdest + size;
    while (src[sayacsrc] && (sayacdest+1) < size)
        dest[sayacdest++] = src[sayacsrc++];
    dest[sayacdest] = '\0';
    return (index);
}
void    ft_strncpy(char *dest, const char *src, size_t size)
{
    size_t  i;

    i = 0;
    while (i < size - 1 && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}