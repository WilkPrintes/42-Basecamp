void	start_var(int *a, int *b);

void	ft_sort_int_tab(int *tab, int size)
{
	int	stop;
	int	init;
	int	temp;

	start_var(&stop, &init);
	while (stop <= size)
	{
		stop = 0;
		while (init++ <= size)
		{
			if (tab[init - 1] > tab[init])
			{
				temp = tab[init - 1];
				tab[init - 1] = tab[init];
				tab[init] = temp;
			}
		}
		init = 0;
		while (init++ <= size)
		{
			if (tab[init - 1] <= tab[init])
				stop++;
		}
		init = 0;
	}
}

void	start_var(int *a, int *b)
{
	*a = 0;
	*b = 0;
}
