/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 22:42:16 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/25 17:51:05 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	conversion_base(long nbr, char *base, int size)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		conversion_base(-nbr, base, size);
	}
	else if (nbr < size)
	{
		write(1, &base[nbr], 1);
		return ;
	}
	else
	{
		conversion_base(nbr / size, base, size);
		write(1, &base[nbr % size], 1);
	}
}

int	verif_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
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
	return (0);
}
//verifie qu'il y a pas de - ou + et de redandonce return 1 si y a un blem

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;
	int	nb;

	nb = (long) nbr;
	size = ft_strlen(base);
	if (verif_base(base))
		return ;
	conversion_base(nb, base, size);
}
/*
int	main(int argc, char **argv)
{
	int	nbr;

	nbr = -137457610;
	if (argc == 2)
		ft_putnbr_base(nbr, argv[1]);
	else
		ft_putnbr_base(nbr, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	return (0);
}*/
