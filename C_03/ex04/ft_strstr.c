char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		is_match;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			is_match = 1;
			while (to_find[j] != '\0' && is_match)
			{
				if (str[i + j] != to_find[j])
					is_match = 0;
				j++;
			}
			if (is_match)
				return (str + i);
		}
		i++;
	}
	return (0);
}
