/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 12:00:09 by vnascime          #+#    #+#             */
/*   Updated: 2020/02/05 14:06:09 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	rev(char *s)
{
	int		c;
	int		f;
	char	tmp;

	f = ft_strlen(s) - 1;
	c = 0;
	while (c < f)
	{
		tmp = s[c];
		s[c] = s[f];
		s[f] = tmp;
		c++;
		f--;
	}
}

static int	intlength(int size)
{
	int		l;

	l = 1;
	while (size > 9)
	{
		l++;
		size /= 10;
	}
	return (l);
}

char		*ft_itoa(int n)
{
	int				i;
	unsigned int	f;
	char			sign;
	int				size;
	char			*new;

	f = 0;
	sign = (n < 0) ? '-' : 0;
	f = (n < 0) ? -n : n;
	size = (sign == '-') ? intlength(f) + 1 :
		intlength(f);
	new = (char *)ft_calloc(size, sizeof(char));
	i = 0;
	if (f == 0)
		new[i] = '0';
	while (f > 0)
	{
		new[i++] = (f % 10) + '0';
		f /= 10;
	}
	if (sign == '-')
		new[i] = '-';
	rev(new);
	return (new);
}
