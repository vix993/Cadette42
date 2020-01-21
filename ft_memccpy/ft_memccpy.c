/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 19:25:31 by vnascime          #+#    #+#             */
/*   Updated: 2020/01/21 19:39:28 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*dest;
	const char	*source;

	dest = (char *)dst;
	source = (const char *)src;
	while (n--)
	{
		if (*source == (unsigned char)c)
		{
			dest + 1 = 0;
			return (dst);
		}
		*dest++ = *source++;
	}
	return (dst);
}
