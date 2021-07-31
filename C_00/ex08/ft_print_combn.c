#include <unistd.h>

void	ft_print_combn(int n);
void	init_array(int array[9], int counter);
void	show_array(int s_array[9], int number);
int		validate_write(int v_array[9], int iv);
void	while_1(int total[9], int n, int i);

void	ft_print_combn(int n)
{
	int	total[9];
	int	i;
	int	a;
	int	last_var;

	n--;
	init_array(total, n);
	while (total[0] <= '9')
	{
		last_var = n - 1;
		total[n] = '0';
		a = 1;
		while_1 (total, n, i);
		while (last_var > 0)
		{
			if (total[n - a] == '9')
			{
				total[n - a] = '0';
				a++;
			}
			last_var--;
		}		
		total[n - a]++;
		i = 0;
	}
}

void	init_array(int array[9], int counter)
{
	while (counter >= 0)
	{
		array[counter] = '0';
		counter--;
	}
}

void	show_array(int s_array[9], int number)
{
	int	i;
	int	value;

	i = 0;
	number++;
	while (i < number)
	{
		write(1, &s_array[i], 1);
		i++;
	}
	value = s_array[0] - '0';
	if (10 - number == value)
		write(1, " ", 1);
	else
		write(1, ", ", 2);
}

int	validate_write(int v_array[9], int iv)
{
	int	validation;

	validation = 0;
	while (iv > 0)
	{
		if (v_array[iv] > v_array[iv - 1] && v_array[iv] != v_array[iv - 1])
			validation = validation + 0;
		else
			validation++;
		iv--;
	}
	if (validation > 0)
		return (1);
	else
		return (0);
}

void	while_1(int total[9], int n, int i)
{
	i = 0;
	while (i <= 9)
	{
		if (validate_write(total, n) == 0)
			show_array(total, n);
		total[n]++;
		i++;
	}
}
