/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 22:10:02 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/24 14:39:57 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	max_min(int nbr)
{
	if (nbr == -2147483648)
		write(1, "-2147483648", 11);
	else if (nbr == 2147483647)
		write(1, "2147483647", 10);
	else
		return (0);
	return (1);
}

void	ft_putnbr(int nb)
{
	char	a;

	if (max_min(nb))
		return ;
	if (nb < 10 && nb >= 0)
	{
		a = nb + 48;
		write(1, &a, 1);
		return ;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		return (ft_putnbr(-nb));
	}
	else
	{
		ft_putnbr(nb / 10);
		a = 48 + (nb % 10);
		write(1, &a, 1);
	}
}
/*
int	main(void)
{
	ft_putnbr(-2846);
	return (0);
}*/
