const char *ft_strrchr(const char *s, int c)
{
	int i;
	const char *a;

	i = 0;
	if (s[i] == 0)
		return 0;

	while (s[i] != 0)
	{
		if (*s == (char)c)
			a = s;
		s++;
	}
	return a;
}
