/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:42:58 by jvigny            #+#    #+#             */
/*   Updated: 2022/08/20 15:48:56 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	b_tracking(int **tab, int i, int j)
{
	int	caisse;

	caisse = 1;
	if (i >= 5 && j >= 5)
		return (1);
	if (tab[i][j] != 0)
		return (0);
	while(caisse < 5)
	{
		if (ligne() == 0 && colonne() == 0 && condition () == 0)
		{
			tab[][] = caisse;
			i++;
			if (i == 5)
			{
				i = 1;
				j++;
			}
			b_tracking(tab, i, j);
		}
		caisse++;
	}
	if (tab[i][j] == 0)
		return (0);
}


