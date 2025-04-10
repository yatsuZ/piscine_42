/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:33:30 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/23 21:39:49 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	r;

	r = *a;
	*a = *b;
	*b = r;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				ft_swap(&tab[j], &tab[j +1]);
			}
			j++;
		}
		i++;
	}
}
/*
void	affichage_tab_int(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (i == 0)
			printf("[");
		printf(" %d,", tab[i]);
		i++;
		if (i == size)
			printf(" ]\n");
	}
}

int	main(void)
{
	int	tab[] = {5, 8, -1, 0, 18, 3, 4};
	int size = 7;
	affichage_tab_int(tab, size);
	ft_sort_int_tab(tab, size);
	affichage_tab_int(tab, size);
	return (0);
}*/
