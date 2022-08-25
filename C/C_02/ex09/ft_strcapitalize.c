/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:55:31 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/18 20:06:34 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + ('a' - 'A');
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	condition;

	i = 0;
	condition = 1;
	str = ft_strlowcase(str);
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (condition && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= ('a' - 'A');
			condition = 0;
		}
		else
			condition = 1;
		i++;
	}
	return (str);
}
/*
int	main(int argc, char **argv)
{
	printf("%s\n",argv[0]);
	if (argc)
	{
		printf("\n%s", argv[1]);
		printf("\n%s", ft_strcapitalize(argv[1]));
	}
	return (0);
}*/
