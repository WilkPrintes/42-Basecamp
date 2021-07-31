char	*ft_strcat(char *dest, char *src)
{
	int	i_d;
	int	i_s;

	i_d = 0;
	i_s = 0;
	while (dest[i_d] != '\0')
	{
		i_d++;
	}
	while (src[i_s] != '\0')
	{
		dest[i_d + i_s] = src[i_s];
		i_s++;
	}
	dest[i_d + i_s] = '\0';
	return (dest);
}
