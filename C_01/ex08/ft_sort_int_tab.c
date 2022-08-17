/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:33:30 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/17 16:07:44 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	r;

	size--;
	while (i < size)
	{
		j = 0;
		while (j < size - i)
		{
			if (tab[j] > tab[j + 1])
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
			printf(" ]");
	}
}

int	main(void)
{
	int	tab[] = {10,5,4,7,4,9,12,3,33,6,100,14};
	int size = 12;
	affichage_tab_int(tab, size);
	ft_sort_int_tab(tab, size);
	affichage_tab_int(tab, size);
	return (0);
}*/
