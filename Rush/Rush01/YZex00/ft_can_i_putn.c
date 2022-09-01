/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_can_i_putn.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 05:18:22 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/21 18:38:20 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "main.h"
int verification_non_redondonce(int **tab, int i, int j, int n);
int verif_contrainte_args(int **tabs, int i, int j, int n);

int	can_i_put_1(int **tab, int i, int j)
{
//	printf("\n Test 1");
//	printf("\n--can_i_put\ni = %d et j = %d et",i, j);
//	printf(" tab[i][j] = %d\n",tab[i][j]);
	if (verification_non_redondonce(tab, i, j, 1))
		return (0);
	if (verif_contrainte_args(tab, i, j, 1))
		return (1);
	return (0);
}

int	can_i_put_2(int **tab, int i, int j)
{
//	printf("\n Test 2");
//	printf("\n--can_i_put\ni = %d et j = %d et",i, j);
//	printf(" tab[i][j] = %d\n",tab[i][j]);
	if (verification_non_redondonce(tab, i, j, 2))
		return (0);
	if (verif_contrainte_args(tab, i, j, 2))
		return (1);
	return (0);
}

int	can_i_put_3(int **tab, int i, int j)
{
//	printf("\n Test 3");
//	printf("\n--can_i_put\ni = %d et j = %d et",i, j);
//	printf(" tab[i][j] = %d\n",tab[i][j]);
	if (verification_non_redondonce(tab, i, j, 3))
	{
		return (0);
	}
	if (verif_contrainte_args(tab, i, j, 3))
	{
		return (1);
	}
	return (0);
}

int	can_i_put_4(int **tab, int i, int j)
{
//	printf("\n Test 4");
//	printf("\n--can_i_put\ni = %d et j = %d et",i, j);
//	printf(" tab[i][j] = %d\n",tab[i][j]);
	if (verification_non_redondonce(tab, i, j, 4))
	{
		return (0);
	}
	if (verif_contrainte_args(tab, i, j, 4))
	{
		return (1);
	}
	return (0);

}

int	can_i_put(int **tab, int i, int j)
{
//	printf("\n--can_i_put\ni = %d et j = %d et",i, j);
//	printf(" tab[i][j] = %d\n",tab[i][j]);
	if (tab[i][j] == 0 && can_i_put_1(tab, i, j))
	{
		tab[i][j] = 1;
		return (0);
	}
	else if (tab[i][j] <= 1 && tab[i][j] >= 0 && can_i_put_2(tab, i, j))
	{
		tab[i][j] = 2;
		return (0);
	}
	else if (tab[i][j] <= 2 && tab[i][j] >= 0 && can_i_put_3(tab, i, j))
	{
		tab[i][j] = 3;
		return (0);
	}
	else if (tab[i][j] <= 3 && tab[i][j] >= 0 && can_i_put_4(tab, i, j))
	{
		tab[i][j] = 4;
		return (0);
	}
	else
		return (1);
}
//teste si on petre un nbr si non return 1

/*
les can i put sont des fonction qui permete de metre 
de return si on peut metre n nombre return 1 si il peut sinon 0
*/
