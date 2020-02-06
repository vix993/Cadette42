/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 15:45:24 by vnascime          #+#    #+#             */
/*   Updated: 2020/01/25 19:56:30 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	a;

	i = 0;
	while (haystack[i] != 0 && len != 0)
	{
		if (*needle == 0)
			return ((char *)haystack);
		j = 0;
		a = i;
		while (haystack[i] == needle[j] && i < len)
		{
			j++;
			i++;
			if (needle[j] == '\0')
				return ((char *)haystack + a);
		}
		i = a;
		i++;
	}
	return (NULL);
}
