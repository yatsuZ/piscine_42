/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:07:53 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/17 11:13:54 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;

	a = 50;
	b = 10;
	ptra = &a;
	ptrb = &b;
	printf("a = %d | b = %d\n",a,b);
	ft_ultimate_div_mod(ptra, ptrb);
	printf("a = %d | b = %d",a,b);
}*/
