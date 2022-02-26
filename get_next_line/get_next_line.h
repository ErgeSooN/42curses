/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman <ayaman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:29:36 by ayaman            #+#    #+#             */
/*   Updated: 2022/02/26 18:49:44 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LİNE_H
# define GET_NEXT_LİNE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
#endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

char	*ft_get_line(char *kalan);
char	*ft_new_left_str(char *kalan);
char	*ft_read_to_left_str(int fd, char *kalan);
char	*get_next_line(int fd);
//get_next_line_utils
size_t  ft_strlen(const char *s);
size_t  ft_strlcat(char *dest, const char *src, size_t size);
void    ft_strncmp(char *dest, const char *src, size_t size);
char    *ft_strchr(const char *s, int c);
char    *ft_strjoin(char *s1, char *s2);


#endif

// main'de open fonksiyonunu kullanmak için fcntl.h kütüphanesini kullandık
// malloc fonksiyonunu kullanmak için stdlib.h kütüphanesini kullandık
// write ve read fonksiyonunu kullanmak için unistd.h kütüphanesini kullandık