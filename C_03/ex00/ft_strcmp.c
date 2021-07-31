int	ft_strcmp(char *s1, char *s2)
{
	int	diff;

	while (*s1 != '\0' && *s2 != '\0')
	{
		diff = (unsigned char)(*s1) - (unsigned char)(*s2);
		if (diff != 0)
			return (diff);
		s1++;
		s2++;
	}
	diff = (unsigned char)(*s1) - (unsigned char)(*s2);
	return (diff);
}
