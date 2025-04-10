/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:47:43 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/24 13:45:37 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_putnbr(int nb)
{
	char	a;

	if (particular_case(nb))
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-1 * nb);
	}
	else if (nb / 10 == 0)
	{
		a = nb + 48;
		write(1, &a, 1);
		return ;
	}
	else
	{
		ft_putnbr(nb / 10);
		a = (nb % 10) + 48;
		write(1, &a, 1);
	}
}

int	main(void)
{
	ft_putnbr(2147483648);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(-1);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(8);
	write(1, "\n", 1);
	return (0);
}
