#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	a;

	if (n >= 0 )
	{
		a = 'P';
		write (1, &a, 1);
	}
	else
	{
		a = 'N';
		write (1, &a, 1);
	}
}
