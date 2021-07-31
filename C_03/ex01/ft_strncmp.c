int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	diff;

	if (n == 0)
		return (0);
	while (*s1 != '\0' && *s2 != '\0')
	{
		diff = (unsigned char)(*s1) - (unsigned char)(*s2);
		s1++;
		s2++;
		n--;
		if (diff != 0 || n == 0)
			return (diff);
	}
	diff = (unsigned char)(*s1) - (unsigned char)(*s2);
	return (diff);
}
