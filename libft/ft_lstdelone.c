/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaman <ayaman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:29:54 by ayaman            #+#    #+#             */
/*   Updated: 2022/02/24 10:59:03 by ayaman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
//bir struct verilir ve eger o bos ise direkt return edilir.
// eger bos degilse verilen del fonksiyonuna lst nin contenti verilir
// silinir, en sonda da free ile lst bellekten silinir.
