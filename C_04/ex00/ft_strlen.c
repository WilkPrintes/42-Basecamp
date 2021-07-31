int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str = str + 1;
		i++;
	}
	return (i);
}
