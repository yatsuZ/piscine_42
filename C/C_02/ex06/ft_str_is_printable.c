/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:06:05 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/18 15:12:27 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str >= ' ' && *str <= '~')
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
		a = ft_str_is_printable(argv[1]) + 48;
		write(1, &a, 1);
	}
	return (0);
}*/
