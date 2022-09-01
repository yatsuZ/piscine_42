/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 19:49:13 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/29 18:45:36 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	long	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	i;
	i = 2147483647;
	printf("%d est il un nombre premier ", i);
	if (ft_is_prime(i))
		printf("VV OUI VV");
	else
		printf("!! NON !!");
	return (0);
}*/
