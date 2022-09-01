/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 12:43:20 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/20 17:19:29 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "main.h"

void	print_tab(int **tab,int option)
{
	int	i;
	int	j;
	char a;
	int	size;

	i = 0;
	j = 0;
	size = 6;
	if (option)
	{
		size = 5;
		i = 1;
		j = 1;
	}
	while (i < size)
	{
		j = 0;
		if (option)
			j = 1;
		while (j < size)
		{
			a = tab[i][j] + 48;
			write(1, &a, 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
//fonction qui affiche un tableau de 6 * 6 avec une option qui affiche
//a partir de 1 1 a 4 4;

