#include <unistd.h>

void	ft_print_comb2(void);
void	write_text(char a[2], char b[2]);
void	start_array(char a[2], char b[2]);

void	ft_print_comb2(void)
{
	char	a[2];
	char	b[2];

	start_array (a, b);
	while (b[0] < 58)
	{
		while (b[1] < 57)
		{
			write_text (a, b);
			b[1]++;
		}
		write_text (a, b);
		b[1] = 48;
		b[0]++;
		if (b[0] >= 58 && a[1] < 57)
		{
			a[1]++;
			b[0] = 48;
		}
		if (a[1] >= 57 && a[0] < 57)
		{
			a[0]++;
			a[1] = 48;
		}
	}
}

void	write_text(char a[2], char b[2])
{
	if (a[0] * 10 + a[1] < b[0] * 10 + b[1])
	{
		if (a[0] == 57 && a[1] == 56 && b[0] == 57 && b[1] == 57)
		{
			write(1, &a[0], 1);
			write(1, &a[1], 1);
			write(1, " ", 1);
			write(1, &b[0], 1);
			write(1, &b[1], 1);
		}
		else
		{
			write(1, &a[0], 1);
			write(1, &a[1], 1);
			write(1, " ", 1);
			write(1, &b[0], 1);
			write(1, &b[1], 1);
			write(1, ", ", 2);
		}
	}
}

void	start_array(char a[2], char b[2])
{
	a[0] = 48;
	a[1] = 48;
	b[0] = 48;
	b[1] = 48;
}	
