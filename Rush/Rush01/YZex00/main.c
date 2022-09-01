/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 12:31:13 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/22 17:16:24 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include <stdio.h>
#include <unistd.h>

int come_back(int **tab, int *i, int *j)
{
	tab[*i][*j] = 0;
	if (*i == 1 && *j == 1)
		return (1);
	else if (*j == 1)
	{
		*i = *i - 1;
		*j = 4;
	}
	else
		*j = *j - 1;
	return (0);
}

int	tatakae(int *i, int *j)
{
//	printf("||||||||||||||||\ni = %d et j = %d\n----------\n",*i,*j);
	if (*j >= 4 && *i >= 4)
		return (0);
	if (*j == 4)
	{
		*j = 1;
		*i = *i + 1;
	}
	else
		*j = *j+ 1;
//	printf("i = %d et j = %d\n",*i,*j);
	return (1);
}

int	badtracking(int	**tab, int i, int j)
{
	int	retour;
	int fin;
	int	condition;
//	int tour;

//	tour = 0;
	condition = 1;
	fin = 1;
	while (fin)//but arriver a la fin de mon tableau 4*4
	{
//		printf("\ntour | %d | : ", tour++);
//		print_tab(tab, 0);
//		printf("i = %d et j = %d\n",i,j);
		condition = 1;
		retour = 1;
		if (can_i_put(tab, i, j))//si choix return alors jai explorer tout les possibilite sinon aplemente la valeur possible
		{	
			condition = 0;
			retour = come_back(tab, &i, &j);
			if (retour)//retourne en arriere si la fonction reutrn 1 sa veut dire que je suis revenu trop en arrier dcp c'est foutue
			{
				return (1);
			}
		}
		if (condition)
		{
			fin = tatakae(&i, &j);//traverse la liste
		}
		//if (i == 4 && j == 1)
//		printf("\n\n");
//		print_tab(tab, 0);
	}
	return (0);
}

////////////////////////////////////////////////////////////////////////////////////////main

int	main(int argc, char **argv)
{
	int	**tab;
	if (verif_args(argv, argc))
	{
		tab = tableau6_6();
		/*
		printf("voila le tableau vide = \n");
		print_tab(tab, 0);
		*/
		add_args(tab, argv[1]);
		/*
		printf("mtn on as mis les argument = \n");
		print_tab(tab, 0);
		printf("avant = \n");
		print_tab(tab, 1);
		printf("mtn on veux seulement ce qui nous interesse = \n");
		*/
		if (badtracking(tab, 1, 1))
		{
			printf("IMPOSSIBLE");
			return (0);
		}
		print_tab(tab, 1);
//		printf("mtn on as mis les argument = \n");
//		if (pre_remplissage(tab))
//		{
//			write(1, "IMPOSSIBLE\n", 11);
//			return (0);
//		}
//		print_tab(tab, 0);
//		printf("mtn on veux seulement ce qui nous interesse = \n");
//		print_tab(tab, 1);
	}
	return (0);
}
