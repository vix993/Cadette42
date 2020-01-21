/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 18:43:41 by vnascime          #+#    #+#             */
/*   Updated: 2020/01/21 19:32:00 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*source;
	size_t		i;

	dest = (char *)dst;
	source = (const char *)src;
	i = 0;
	if (source < dest)
	{
		while (i++ < len)
			*dest++ = *source++;
	}
	else
	{
		while (len--)
			*dest++ = *source++;
	}
	return (dst);
}
