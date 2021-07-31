#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_atoi(char *str)
{
	int i;
	int more;
	int less;
	int final;

	more = 0;
	less = 0;
	i = 0;
	final = 0;
	while((str[i] >= 9 && (str[i] <= 13)) || str[i] == 32)
	{
		i++;
	}
	while(str[i] == '-' || str[i] == '+')
	{
		if (str[i] == 45 )
			less++;
		i++;
	}
	while(str[i] >= 48 && str[i] <= 57)
	{
		final = final*10 + str[i] - '0';
		i++;
	}
	if (less%2 != 0)
		final = final * -1;
	return (final);
}
