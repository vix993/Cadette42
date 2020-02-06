/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:07:37 by vnascime          #+#    #+#             */
/*   Updated: 2020/02/06 16:59:02 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*a;

	if (*s == 0)
		return ((char *)s);
	while (*s)
	{
		if (*s == (char)c)
			a = s;
		s++;
	}
	if (a != 0)
		return ((char *)a);
	if (c == 0)
		return ((char *)s);
	return (NULL);
}
