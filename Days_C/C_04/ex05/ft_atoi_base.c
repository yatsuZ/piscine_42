/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 05:47:15 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/29 20:08:12 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	verif_whitespace(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

int	verif_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+' || verif_whitespace(str[i]))
			return (1);
		j = i + 1;
		while (str[j])
		{
			if (str[j++] == str[i])
				return (1);
		}
		i++;
	}
	if (i <= 1)
		return (1);
	return (i);
}
//verifie qu'il y a pas de - ou + et de redondance return 1 si y a un blem

int	inside(char thing, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (thing == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		signe;
	long	nb;
	int		size;

	i = 0;
	nb = 0;
	signe = 1;
	size = verif_base(base);
	if (size == 1)
		return (0);
	while (verif_whitespace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while (inside(str[i], base) != -1 && str[i])
	{
		nb = size * nb + inside(str[i++], base);
	}
	return (nb * signe);
}
/*
int	main(int argc, char **argv)
{
	char	*value = "-LOUTRE";
	char	*base =	"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	if (argc == 3)
		printf("nbr = %d\n", ft_atoi_base(argv[1], argv[2]));
	else
		printf("nbr = %d\n", ft_atoi_base(value, base));
}*/
