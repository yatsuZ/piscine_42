/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:43:23 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/17 15:32:56 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//void	affichage_tab_int(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	r;
	int	i;

	i = 0;
	r = 0;
	size--;
	while (size / 2 > i)
	{
		r = tab[i];
		tab[i] = tab[size - i];
		tab[size - i] = r;
		i++;
	}
}

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
/*
int	main(void)
{
	int	tab[] = {0,1,2,3,4,5,6,7,8,9,10};
	int size = 11;
	affichage_tab_int(tab, size);
	ft_rev_int_tab(tab, size);
	affichage_tab_int(tab, size);
	return (0);
}*/
