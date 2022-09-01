/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:40:46 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/24 22:40:04 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	signe;
	int	nb;
	int	i;

	i = 0;
	nb = 0;
	signe = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			signe = -signe;
	}
	while (str[i] >= '0' && str[i] <= '9')
		nb = 10 * nb + (str[i++] - 48);
	return (nb * signe);
}
/*
int	main(int argc, char **argv)
{
	char	*test;

	test = "\t\n\v\f +-++-+-++012i9";
	if (argc == 2)
	{
		printf("Le mien      = %d\n",ft_atoi(argv[1]));
		printf("Atoi de base = %d\n",atoi(argv[1]));
	}
	else
	{
		printf("Le mien = %d\n",ft_atoi(test));
		printf("Atoi de base = %d\n",atoi(test));
	}
	return (0);
}*/
