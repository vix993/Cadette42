/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 18:52:47 by vnascime          #+#    #+#             */
/*   Updated: 2020/02/06 14:05:38 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list		*new;

	if (content == NULL)
		return (NULL);
	else
	{
		new = malloc(sizeof(t_list));
		new->content = content;
	}
	new->next = NULL;
	return (new);
}
