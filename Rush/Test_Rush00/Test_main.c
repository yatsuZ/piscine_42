/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:18:47 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/14 17:06:26 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

extern	void	rush(int x, int y);

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	write(1, argv[1], 1);
	printf("\n");
	printf("%d", argc);
	printf("\n");
	printf("entre une valeur pour x --> ");
	scanf("%d", &x);
	printf("\nentre une valeur pour y --> ");
	scanf("%d", &y);
	rush(x, y);
	return (0);
}
/*
max x = 282
et 
max y = 73
*/
