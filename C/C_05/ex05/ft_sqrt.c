/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:40:23 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/25 20:34:54 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;

	if (nb == 1)
		return (1);
	if (nb == 2147395600)
		return (46340);
	else if (nb > 2147395600)
		return (0);
	i = 2;
	while (i * i <= nb && i > 1)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	int	i;

	i = 2147302921;
	printf("sqrt(%d) = %d", i, ft_sqrt(i));
	return (0);
}*/
