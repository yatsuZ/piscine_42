/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:50:05 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/31 17:20:34 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	verif_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+'
			|| (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r')))
			return (1);
		j = i + 1;
		while (str[j])
		{
			if (str[j++] == str[i])
			{
				return (1);
			}
		}
		i++;
	}
	if (i <= 1)
		return (1);
	return (i);
}

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
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
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
