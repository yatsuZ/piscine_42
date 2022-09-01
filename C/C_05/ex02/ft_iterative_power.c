/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 06:49:29 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/25 18:21:24 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	resulte;
	int	tour;

	tour = 0;
	resulte = 1;
	if (power < 0 || (power != 0 && nb == 0))
		return (0);
	while (tour++ < power)
		resulte *= nb;
	return (resulte);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_power(0, 1));
	return (0);
}*/
