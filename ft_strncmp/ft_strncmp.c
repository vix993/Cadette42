/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 15:54:37 by vnascime          #+#    #+#             */
/*   Updated: 2020/01/20 15:54:41 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	while(s1[i] != s1[n])
	{
		if(s1[i] == 0)
			return res;
		res = res + (*s1 - *s2);
		i++;
	}
	return res;
}
