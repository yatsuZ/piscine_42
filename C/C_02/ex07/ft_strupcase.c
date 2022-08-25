/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:25:01 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/18 15:46:52 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('a' - 'A');
		i++;
	}
	return (str);
}
/*
int	main(int argc, char **argv)
{
	if (argc)
	{
		printf("%s", argv[1]);
		printf("\n%s", ft_strupcase(argv[1]));
	}
	return (0);
}*/
