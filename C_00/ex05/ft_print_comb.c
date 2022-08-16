/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:05:15 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/14 19:03:07 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	affichage(int c, int d, int u, int i)
{
	char	ca;
	char	da;
	char	ua;

	ca = c + 48;
	da = d + 48;
	ua = u + '0';
	write(1, &ca, 1);
	write(1, &da, 1);
	write(1, &ua, 1);
	if (i != 789)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	u;
	int	d;
	int	c;
	int	i;

	i = 12;
	while (i <= 789)
	{
		u = i % 10;
		d = (i / 10) % 10;
		c = i / 100;
		if (c < d && d < u)
		{
			affichage(c, d, u, i);
		}
		++i;
	}
}
