/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:40:46 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/24 22:06:36 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	verif_space(char *str, int *i)
{
	while (str[*i] && ((str[*i] >= '\t' && str[*i] <= '\r') || str[*i] == ' '))
		(*i)++;
	if (str[*i] == '-' || str[*i] == '+' || (str[*i] >= '0' && str[*i] <= '9'))
		return (0);
	else
		return (1);
}

int	debut(char *str, int *i)
{
	int	signe;

	signe = 1;
	while (str[*i] && (str[*i] < '1' || str[*i] > '9'))
	{
		if (str[*i] != '-' && str[*i] != '+' && str[*i] != '0')
			return (0);
		if (str[(*i)++] == '-')
			signe = signe * -1;
	}
	if (str[*i])
		return ((str[*i] - 48) * signe);
	return (0);
}

int	ft_atoi(char *str)
{
	int	nbr;
	int	i;

	i = 0;
	if (verif_space(str, &i))
		return (0);
	nbr = debut(str, &i);
	if (nbr == 0)
		return (0);
	i = i + 1;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		if (nbr < 0)
			nbr = nbr * 10 - (str[i++] - 48);
		else
			nbr = nbr * 10 + (str[i++] - 48);
	}
	return (nbr);
}

int	main(int argc, char **argv)
{
	char	*test;

	test = "\t\n\v\f\r  +012i9";
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
}
