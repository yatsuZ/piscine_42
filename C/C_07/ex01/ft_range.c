/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:28:20 by yzaoui            #+#    #+#             */
/*   Updated: 2022/09/01 20:09:18 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*tab;
	long	size;

	size = max - min;
	if (size <= 0)
		return (NULL);
	i = 0;
	tab = malloc(sizeof(long) * size);
	if (!(tab))
		return (NULL);
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
int	main(int argc, char **argv)
{
	int	*tab;
	int	i;

	i = 0;
	if (argc == 3)
	{
		tab = ft_range(atoi(argv[1]), atoi(argv[2]));
		if (tab == NULL)
		{
			free(tab);
			return (0);
		}
		while (i+atoi(argv[1]) < atoi(argv[2]))
			printf("%d, ", tab[i++]);
		free(tab);
		return (0);
	}
	tab = ft_range(54, 400);
	while (i+54 < 400)
		printf("%d, ", ft_range(54, 400)[i++]);
	free(tab);
	return (0);
}*/
