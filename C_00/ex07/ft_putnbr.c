/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:47:43 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/16 12:46:17 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	particular_case(int nbr)
{
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (1);
	}
	else if (nbr == 2147483647)
	{
		write(1, "2147483647", 10);
		return (1);
	}
	else
		return (0);
}

void	ft_putnbr(int nbr)
{
	char	a;

	if (particular_case(nbr))
		return ;
	if (nbr / 10 == 0)
	{
		a = nbr + 48;
		write(1, &a, 1);
		return ;
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-1 * nbr);
	}
	else
	{
		ft_putnbr(nbr / 10);
		a = (nbr % 10) + 48;
		write(1, &a, 1);
	}
}
