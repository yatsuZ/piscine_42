/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstdout.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:41:37 by abesnier          #+#    #+#             */
/*   Updated: 2022/08/27 20:43:01 by abesnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

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
