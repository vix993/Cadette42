// stddef.h include for use of size_t data type
#include <stddef.h>

size_t		ft_strlen(const char *str)
{
	unsigned long int	i;
	unsigned long int	a;

	i = 0;
	while(str[i] != 0)
	{
		i++;
	}
	a = i;
	return i;
}
