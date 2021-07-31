/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 23:54:32 by wprintes          #+#    #+#             */
/*   Updated: 2021/07/30 04:59:20 by wprintes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	if (str == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90 ) || (str[i] >= 97 && str[i] <= 122))
			counter++;
		i++;
	}
	if (counter == i)
		return (1);
	else
		return (0);
}
