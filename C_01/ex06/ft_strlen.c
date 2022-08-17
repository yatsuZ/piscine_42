/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:07:34 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/17 13:41:13 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 1)
		printf("la longue est de = %d",ft_strlen("test ;) yoyooyo"));
	else
		printf("la longue est de = %d",ft_strlen(argv[1]));
	return (0);
}
*/
