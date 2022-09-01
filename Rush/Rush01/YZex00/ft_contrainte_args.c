/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_contrainte_args.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 12:48:51 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/22 17:08:04 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	verif_right(int **tab, int i)
{
	int	index;
	int	nbr_tower;
	int	indexj;
	int	condition;

	condition = 1;
	nbr_tower = 0;
	index = 1;
	while (index != 5)
	{
		indexj = index + 1;
		condition = 1;
		while (indexj != 5)
		{
			if (tab[i][indexj] > tab[i][index])
			{
				condition = 0;
			}
			indexj++;
		}
		if (condition)
		{
			nbr_tower++;
		}
		index++;
	}
//	printf("VERFI right !\n");
	return (tab[i][5] == nbr_tower);
}

int	verif_left(int **tab, int i)
{
	int	index;
	int	nbr_tower;
	int	indexj;
	int	condition;

	condition = 1;
	nbr_tower = 0;
	index = 4;
	while (index != 0)
	{
		indexj = index - 1;
		condition = 1;
		while (indexj != 0)
		{
			if (tab[i][indexj] > tab[i][index])
			{
				condition = 0;
			}
			indexj--;
		}
		if (condition)
		{
			nbr_tower++;
		}
		index--;
	}
//	printf("VERFI left !\n");
	return (tab[i][0] == nbr_tower);
}

int	verif_down(int **tab, int j)
{
	int	index;
	int	nbr_tower;
	int	indexj;
	int	condition;
	
//	printf("\nje check arg down\n");
	condition = 1;
	nbr_tower = 0;
	index = 1;
	while (index != 5)
	{
		indexj = index + 1;
		condition = 1;
		while (indexj != 5)
		{
			if (tab[indexj][j] > tab[index][j])
			{
				condition = 0;
			}
			indexj++;
		}
		if (condition)
		{
			nbr_tower++;
		}
		index++;
	}
	return (tab[5][j] == nbr_tower);
}

int	verif_top(int **tab, int j)
{
	int	index;
	int	nbr_tower;
	int	indexj;
	int	condition;

	//printf("\nje check arg top\n");
	condition = 1;
	nbr_tower = 0;
	index = 4;
	while (index != 0)
	{
		indexj = index - 1;
		condition = 1;
		while (indexj != 0)
		{
			if (tab[indexj][j] > tab[index][j])
			{
				condition = 0;
			}
			indexj--;
		}
		if (condition)
		{
			nbr_tower++;
		}
		index--;
	}
	//printf("\nnbr = %d et nbrT = %d\n",tab[0][j],nbr_tower);
	return (tab[0][j] == nbr_tower);
}

int	verif_contrainte_args(int **tab, int i, int j, int n)
{
	int	bon;
	int	memoir;

	bon = 1;
	memoir = tab[i][j];
	tab[i][j] = n;
	if (j == 4)
	{
		if (verif_left(tab, i) && verif_right(tab, i))
			bon = 1;
		else
			bon = 0;
		//printf("Verification ARGS\n");
	}
	if (i == 4)
	{
		if (verif_top(tab, j) && verif_down(tab, j) && bon)
			bon = 1;
		else
			bon = 0;
		//printf("\nBon = %d\n",bon);
	}
	tab[i][j] = memoir;
	return (bon);
}
//cree des fonction verif qui check que les argument son bon 
//4 voit 1 2 3 4 etc erturn 1 si cest bon 0 si non
