/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:50:37 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/25 01:58:20 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			str++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(int argc, char **argv)
{
	char	a;

	if (argc)
	{
		a = ft_str_is_numeric(argv[1]) + 48;
		write(1, &a, 1);
	}
	return (0);
}*/
