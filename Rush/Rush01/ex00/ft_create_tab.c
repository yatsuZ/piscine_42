/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 12:07:49 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/20 15:49:24 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int	**tableau6_6(void)
{
	int	**tab;
	int	i;
	int	j;

	i = 0;
	tab = malloc(sizeof(int *)*6);
	while (i < 6)
	{
		j = 0;
		tab[i] = malloc(sizeof(int)*6);
		while (j < 6)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	return (tab);
}
//cree une fonction qui cree un table de 6 sur 6 remplie de 0

void	add_args(int **tab, char *str)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	while(str[i])
	{
		if(i < 7)
			tab[0][j] = str[i++] - '0';
		if(i > 7 && i < 15)
			tab[5][j] = str[i++] - '0';
		if(i > 15 && i < 23)
			tab[j][0] = str[i++] - '0';
		if(i > 23 && i < 32)
			tab[j][5] = str[i++] - '0';
		i++;
		j++;
		if (j == 5)
			j = 1;
	}
}

