/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:18:10 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/30 18:15:25 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	result = 1;
	while (nb != 1)
		result *= nb--;
	return (result);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(1));
	return (0);
}*/
