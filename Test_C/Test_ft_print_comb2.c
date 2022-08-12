/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test_ft_print_comb2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 12:01:12 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/12 13:39:28 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	affichage2(int m, int c, int d, int u)
{
	char	ma;
	char	ca;
	char	da;
	char	ua;

	ma = m + 48;
	ca = c + 48;
	da = d + 48;
	ua = u + 48;
	i = m * 1000 + c * 100 + d * 10 + u;
	write(1, &ma, 1);
	write(1, &ca, 1);
	write(1, " ", 1);
	write(1, &da, 1);
	write(1, &ua, 1);
	if (m != 9 && c != 8 && d != 9 && u != 9)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	m;
	int	c;
	int	d;
	int	u;

	i = 0;
	while (i <= 9899)
	{
		m = (i / 1000) % 10;
		c = (i / 100) % 10;
		d = (i / 10) % 10;
		u = i % 10;
		if ((m * 10 + c) < (d * 10 + u))
		{
			affichage2(m, c, d, u);
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
