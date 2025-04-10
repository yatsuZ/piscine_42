/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:35:17 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/29 15:17:14 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	condition(int *tab, int pos)
{
	int	i;
	int	j;
	int	diagobas;
	int	diagohaut;

	i = 0;
	while (i <= pos && i < 10)
	{
		j = i + 1;
		diagobas = tab[i] - i;
		diagohaut = tab[i] + i;
		while (j <= pos && j < 10)
		{
			if (tab[i] == tab[j])//not same
				return (0);
			if ((diagobas - (tab[j] - j)) == 0 || diagohaut - (tab[j] + j) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}


int	main(void)
{
//	int	tab[10] = {0,2,5,7,9,4,8,1,3,6};
//	int	tab[10] = {0,2,5,8,6,9,3,1,4,7};
	int	tab[10] = {0,2,5,8,6,9,3,1,7,4};
	if	(condition(tab, 9))
		printf("c'est bon");
	else
		printf("ERROR");
	return (0);
}
