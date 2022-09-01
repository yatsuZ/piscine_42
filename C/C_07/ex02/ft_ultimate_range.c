/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:01:12 by yzaoui            #+#    #+#             */
/*   Updated: 2022/09/01 20:16:12 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	long	size;

	size = max - min;
	if (size <= 0)
	{
		range = NULL;
		return (0);
	}
	i = 0;
	range[0] = malloc(sizeof(long) * size);
	if (!(range[0]))
		return (-1);
	while (i < size)
	{
		range[0][i] = min + i;
		i++;
	}
	return (size);
}
/*
int	main(int argc, char **argv)
{
	int	*tab;
	int	i;
	int nbr;

	i = 0;
	if (argc == 3)
	{
		nbr = ft_ultimate_range(&tab, atoi(argv[1]), atoi(argv[2]));
		if (nbr == 0)
		{
			printf("\nnbr = %d", nbr);
			free(tab);
			return (0);
		}
		while (i+atoi(argv[1]) < atoi(argv[2]))
			printf("%d, ", tab[i++]);
		printf("\nnbr = %d", nbr);
		free(tab);
		return (0);
	}
	nbr = ft_ultimate_range(&tab, 54, 400);
	while (i+54 < 400)
		printf("%d, ", tab[i++]);
	printf("\nnbr = %d", nbr);
	free(tab);
	return (0);
}*/
