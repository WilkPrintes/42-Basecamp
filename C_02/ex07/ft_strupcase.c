int	is_lowercase(char character)
{
	if (character >= 'a' && character <= 'z')
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_lowercase(str[i]))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}