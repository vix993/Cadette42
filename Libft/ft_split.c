/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 12:06:06 by vnascime          #+#    #+#             */
/*   Updated: 2020/02/06 18:26:55 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

static size_t	countstr(char const *s, char c)
{
	size_t		i;
	int			count;

	count = 0;
	i = 0;
	while (s[i] != 0)
	{
		if (i == 0)
		{
			if (s[i] != c)
				count++;
			i++;
		}
		if (s[i] != c && s[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}

char			**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		j;
	size_t		l;
	size_t		count;
	char		**new;

	count = countstr(s, c);
	new = (char **)ft_calloc(count + 1, sizeof(char **));
	i = 0;
	j = 0;
	while (i < count && count != 0)
	{
		if (s[j] != c)
		{
			l = j;
			while (s[j] != c)
				j++;
			new[i] = (char *)ft_calloc(j - l + 1, sizeof(char));
			ft_memcpy(new[i], s + l, (j - l));
			i++;
		}
		else
			j++;
	}
	return (new);
}
