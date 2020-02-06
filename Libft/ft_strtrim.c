/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 20:05:03 by vnascime          #+#    #+#             */
/*   Updated: 2020/02/05 16:35:23 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

static size_t	checkfront(char const *s1, char const *set)
{
	size_t		i;
	size_t		start;

	i = 0;
	start = 0;
	while (set[i] != 0 || s1[start] == set[i])
	{
		if (s1[start] == set[i])
		{
			i = 0;
			start++;
		}
		else
			i++;
	}
	return (start);
}

static size_t	checkback(char const *s1, char const *set)
{
	size_t		i;
	size_t		end;

	i = 0;
	end = ft_strlen(s1);
	while (set[i] != 0 || s1[end] == set[i])
	{
		if (s1[end] == set[i])
		{
			i = 0;
			end--;
		}
		else
			i++;
	}
	return (end + 1);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		start;
	size_t		end;
	char		*new;

	end = ft_strlen(s1);
	start = checkfront(s1, set);
	i = 0;
	end = checkback(s1, set);
	if (start == ft_strlen(s1) + 1)
	{
		new = (char *)ft_calloc(1, sizeof(char));
		return (new);
	}
	else
		new = (char *)ft_calloc((end - start + 1), sizeof(char));
	while (start < end)
	{
		new[i] = s1[start];
		i++;
		start++;
	}
	return (new);
}
