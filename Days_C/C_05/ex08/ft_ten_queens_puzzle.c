/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:35:54 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/29 15:59:50 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//affiche un tableaud d'int de 10 ellement avec un \n a la fin
void	print_tab(int *tab)
{
	char	a;
	int		i;

	i = 0;
	while (i < 10)
	{
		a = tab[i++] + '0';
		write(1, &a, 1);
	}
	write(1, "\n", 1);
}

/*
return 1 si le tableau valides la condition de ne peas avoir 2 fois la meme 
valeur et de ne peut avoir une suite croissante ou decroissant sinon renvoie 0
traduction = ne pas avoir une damme sur la meme ligne et pas sur 
la meme diagononale / ou \
*/
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
			if (tab[i] == tab[j])
				return (0);
			if ((diagobas - (tab[j] - j)) == 0 || diagohaut - (tab[j] + j) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

/*
fonction qui cherche toute les possibilite
*/

int	backtraking(int	*tab, int pos, int *res)
{
	tab[pos] = 0;
	while (pos < 10 && tab[pos] < 10)
	{
		if (pos == 9 && condition(tab, pos))
		{
			(*res)++;
			print_tab(tab);
			return (*res);
		}
		if (condition(tab, pos))
			backtraking(tab, pos + 1, res);
		tab[pos] = tab[pos] + 1;
	}
	tab[pos] = 0;
	return (*res);
}

int	ft_ten_queens_puzzle(void)
{
	int	tableau[10];
	int	position;
	int	resulta;
	int	i;

	i = 0;
	while (i < 10)
		tableau[i++] = 0;
	position = 0;
	resulta = 0;
	backtraking(tableau, position, &resulta);
	return (resulta);
}
/*
int	main(void)
{
	printf("\nres= %d\n",ft_ten_queens_puzzle());
	return (0);
}*/
