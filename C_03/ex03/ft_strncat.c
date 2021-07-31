char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*c;

	c = dest;
	while (*c != '\0')
		c++;
	while (nb != 0 && *src != '\0')
	{
		*c = *src;
		c++;
		src++;
		nb--;
	}
	*c = '\0';
	return (dest);
}
