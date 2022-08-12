/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test_ft_putnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:47:43 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/12 14:15:36 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putnbr(int nbr)
{
	char	a;

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

int	main(void)
{
	int	nbr;

	write(1, "int -> ", 7);
	scanf("%d", &nbr);
	ft_putnbr(nbr);
	return (0);
}
