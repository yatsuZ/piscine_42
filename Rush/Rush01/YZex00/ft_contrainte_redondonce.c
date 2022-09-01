/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_contrainte_redondonce.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:44:10 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/21 18:36:30 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int verif_colone(int **tab, int i, int j, int n)
{
	int t;

	t = 1;
	while (t < 5)
	{
		if (tab[t][j] == n && t != i)
				return (1);
		t++;
	}
	return (0);
}

int verif_ligne(int **tab, int i, int j, int n)
{
	int t;

	t = 1;
	while (t < 5)
	{
		if (tab[i][t] == n && t != j)
			return (1);
		t++;
	}
	return (0);
}

int verification_non_redondonce(int **tab, int i, int j, int n)
{
	tab[i][j] = n;
	if (verif_ligne(tab, i, j, n) || verif_colone(tab, i, j, n))
	{
		return (1);
	}
//	printf("VERFICATION redondonce\n");
	return (0);
}

