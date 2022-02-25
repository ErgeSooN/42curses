/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman <ayaman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:26:35 by ayaman            #+#    #+#             */
/*   Updated: 2022/02/24 10:58:14 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
// BU BIR BAGLI LISTEDIR.
//fonksiyon cagrildiginda verilen icerik (content)
//structimizin content bolumune kaydedilir.
// ilk olusturuldugu icinde next degeri NULL dur
// ve olusturulan yeni struct return edilir.
