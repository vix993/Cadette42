/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 20:40:11 by vnascime          #+#    #+#             */
/*   Updated: 2020/02/09 15:36:11 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list		*temp;
	if (lst)
	{
		while(*lst)
		{
			temp = (*lst)->next;
			ft_lstdelone(*lst, del);
			lst = &temp;
		}
	}
}
