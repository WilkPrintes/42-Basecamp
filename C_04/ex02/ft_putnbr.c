#include <unistd.h>

void	ft_putnbr(int nb);
int		counter(int count);
int		potentiation(int value, int potention);
int		validation(int nb_value);

void	ft_putnbr(int nb)
{
	char	b;
	int		a;
	int		count;

	a = nb;
	if (a < 0)
	{
		a = a * -1;
		write(1, "-", 1);
	}
	if (validation(a) == 1)
	{
		count = counter(a);
		while (count != 0)
		{
			b = (a / potentiation(10, count - 1)) + '0';
			write(1, &b, 1);
			count--;
			b = b - '0';
			a = a -(b * potentiation(10, count));
		}
	}
}

int	counter(int counted)
{
	int	i;
	int	value;

	i = 0;
	value = counted;
	while (value != 0)
	{
		value = value / 10;
		i++;
	}
	return (i);
}

int	potentiation(int value, int potention)
{
	int	total;

	total = value;
	if (potention == 1)
	{
		return (value);
	}
	else if (potention == 0)
	{
		return (1);
	}
	else
	{
		potention = potention - 1;
		while (potention > 0)
		{
			total = total * value;
			potention--;
		}
		return (total);
	}
}

int	validation(int nb_value)
{
	if (nb_value == 0)
	{
		write(1, "0", 1);
		return (0);
	}
	else if (nb_value == -2147483648)
	{
		write(1, "2147483648", 10);
		return (0);
	}
	else
	{
		return (1);
	}
}
