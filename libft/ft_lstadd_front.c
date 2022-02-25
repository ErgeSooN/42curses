/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman <ayaman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:17:20 by ayaman            #+#    #+#             */
/*   Updated: 2022/02/24 10:59:35 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

//daha once olusturulan struct dizimiz (t_list) ve eklenecek yeni struct
// gonderilir. 17. satirda new innext elemani lst nin icerisine atanir.
// 18 de lst nin asil degeri new olur.
// boylece new lst nin onune eklenmis olur.
