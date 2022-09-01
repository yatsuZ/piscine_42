/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:08:07 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/16 23:57:22 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	main(void)
{
	char	c;

	printf("Envoie la sauce = ");
	scanf("%c", &c);
	ft_putchar(c);
	return (0);
}
*/
