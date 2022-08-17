/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:06:22 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/17 10:32:17 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	r;

	r = *a;
	*a = *b;
	*b = r;
}
/*
int	main(void)
{
	int	a = 42;
	int	b = 100;
	int	*ptra = &a;
	int	*ptrb = &b;


	printf("a = %d | b = %d\n",a,b);
	ft_swap(ptra,ptrb);
	printf("a = %d | b = %d\n",a,b);
}*/
