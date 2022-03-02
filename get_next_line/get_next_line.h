/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman <ayaman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:29:36 by ayaman            #+#    #+#             */
/*   Updated: 2022/03/02 09:14:30 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4

# endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

char	*veriyi_birlestir(char *save, char *s2, int sayac1, int sayac2);
char	*veriyi_oku(int fd, char *save);
char	*get_next_line(int fd);
//get_next_line_utils
int	    ft_strlen(char *s);
int		ft_not_newline(char *s);
int		ft_linelen(char *s);
char	*ft_strndup(char *save, int len);
char	*save_rest(char *save, int len);

#endif

// main'de open fonksiyonunu kullanmak için fcntl.h kütüphanesini kullandık
// malloc fonksiyonunu kullanmak için stdlib.h kütüphanesini kullandık
// write ve read fonksiyonunu kullanmak için unistd.h kütüphanesini kullandık
