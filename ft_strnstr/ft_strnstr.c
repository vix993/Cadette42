/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnascime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 15:45:24 by vnascime          #+#    #+#             */
/*   Updated: 2020/01/20 15:48:15 by vnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(char *str, char *to_find, int n)
{
	int i;
	int j;
	int a;

	i = 0;
	while (str[i] != str[n])
	{
		j = 0;
		a = i;
		while (str[i] == to_find[j] && str[i] != str[n])
		{
			j++;
			i++;
			if (to_find[j] == '\0')
				return (str + a);
		}
		i = a;
		i++;
	}
	return (0);
}
