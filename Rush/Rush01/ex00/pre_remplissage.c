/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_remplissage.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:03:55 by jvigny            #+#    #+#             */
/*   Updated: 2022/08/20 15:50:53 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	pre_remplissage_col_up(int **tab)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < 5)
	{
		if (tab[0][i] == 4)
		{
			while (j < 4)
			{
				j++;
				tab[j][i] = j;
			}
			j = 0;
		}
		if (tab[0][i] == 1)
			tab[1][i] = 4;
		i++;
	}
}

void	pre_remplissage_col_down(int **tab)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < 5)
	{
		if (tab[5][i] == 4)
		{
			while (j < 4)
			{
				j++;
				tab[5-j][i] = j;
			}
			j = 0;
		}
		if (tab[5][i] == 1)
			tab[4][i] = 4;
		i++;
	}
}


void	pre_remplissage_row_l(int **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < 5)
	{
		if (tab[j][0] == 4)
		{
			while (i < 4)
			{
				i++;
				tab[j][i] = i;
			}
			i = 0;
		}
		if (tab[j][0] == 1)
			tab[j][1] = 4;
		j++;
	}
}


void	pre_remplissage_row_r(int **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < 5)
	{
		if (tab[j][5] == 4)
		{
			while (i < 4)
			{
				i++;
				tab[j][5-i] = i;
			}
			i = 0;
		}
		if (tab[j][5] == 1)
			tab[j][4] = 4;
		j++;
	}
}
