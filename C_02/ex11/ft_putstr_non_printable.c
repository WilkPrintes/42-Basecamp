/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 23:55:17 by wprintes          #+#    #+#             */
/*   Updated: 2021/07/30 18:27:57 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	dec_to_hexa(int a, char *result);

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	a;
	char	print[2];

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
		{
			dec_to_hexa(str[i], print);
			write(1, "\\", 1);
			write(1, print, 2);
		}
		i++;
	}
}

void	dec_to_hexa(int a, char *result)
{
	int	i;
	int	result1;
	int	result2;

	if (a < 10)
	{
		result[0] = 48;
		result[1] = a + 48;
	}
	else
	{
		result1 = a / 16;
		result2 = a % 16;
		if (result1 >= 10)
			result[0] = result1 + 87;
		else
			result[0] = result1 + 48;
		if (result2 >= 10)
			result[1] = result2 + 87;
		else
			result[1] = result2 + 48;
	}
}
