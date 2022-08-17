/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:33:58 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/17 10:40:55 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
	int	d;
	int	m;
	int	*ptrd;
	int	*ptrm;

	d = 56851;
	m = 88888;
	ptrd = &d;
	ptrm = &m;
	printf("d = %d | m = %d\n",d,m);
	ft_div_mod(81,2,ptrd,ptrm);
	printf("d = %d | m = %d\n",d,m);
	return (0);
}
*/
