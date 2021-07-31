#include <unistd.h>

void	ft_print_comb(void);
void	write_text(char c[3]);

void	ft_print_comb(void)
{
	char	a[3];

	a[0] = '0';
	a[1] = '0';
	a[2] = '0';
	while (a[0] <= '9')
	{	
		while (a[1] <= '9')
		{	
			while (a[2] <= '9')
			{
				if (a[2] > a [1] && a[1] > a[0])
					write_text(a);
				a[2]++;
			}
			a[2] = '0';
			a[1]++;
		}
		a[1] = '0';
		a[0]++;
	}
}

void	write_text(char a[3])
{
	if (a[0] == '7' && a[1] == '8' && a[2] == '9')
	{
		write (1, &*a, 3);
	}
	else
	{
		write (1, &*a, 3);
		write (1, ", ", 2);
	}
}
