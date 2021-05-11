/* s1 > s2 (first unmatching ASCI value) -> return difference but only first n bytes */ 

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] == 0)
			return (0);
		i++;
	}
	return (0);
}
