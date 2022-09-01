/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 21:46:43 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/19 10:13:49 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	itri(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str2[i])
	{
		if (str1[i] > str2[i])
			return (0);
		else if (str1[i] < str2[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_sort_str_tab(char *tab[], int size)
{
	int		i;
	int		j;
	char	*r;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (j != 0 && itri(tab[j + 1], tab[j]))
			{
				r = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = r;
			}
			j++;
		}
		i++;
	}
}

void	ft_putstr(char *c)
{
	while (*c)
		write(1, c++, 1);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		ft_sort_str_tab(argv, argc);
		while (i < argc)
			ft_putstr(argv[i++]);
	}
	return (0);
}
