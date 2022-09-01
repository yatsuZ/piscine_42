/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 07:14:14 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/30 18:05:02 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (nb == 0 || power < 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, (power - 1)));
}
/*
int	main(void)
{
	printf("nbr = %d", ft_recursive_power(10, 3));
	return (0);
}*/
