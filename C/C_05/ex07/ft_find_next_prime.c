/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:09:21 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/25 20:34:27 by yzaoui           ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
/*
int	main(void)
{
	int	i;

	i = 214748367;
	printf("%d a comme nombre premier", i);
	printf("le plus proche >= %d", ft_find_next_prime(i));
	return (0);
}*/
