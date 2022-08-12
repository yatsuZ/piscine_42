/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test_is_negative.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 22:54:53 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/12 10:53:42 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_is_negative(int n)
{
	char	r;

	r = 'P';
	if (n < 0)
	{
		r = 'N';
	}
	write(1, &r, 1);
}

int	main(void)
{
	int	n;

	printf("Envoie un nombre positive ou negatif : ");
	scanf("%d", &n);
	ft_is_negative(n);
	return (0);
}
