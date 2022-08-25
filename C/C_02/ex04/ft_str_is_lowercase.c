/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:54:57 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/18 15:03:04 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
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
		a = ft_str_is_lowercase(argv[1]) + 48;
		write(1, &a, 1);
	}
	return (0);
}*/
