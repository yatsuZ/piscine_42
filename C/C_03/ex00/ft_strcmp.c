/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 07:16:46 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/25 13:50:41 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
//fait gaffe au use case
/*
int	main(int argc, char **argv)
{
	char	*str1 = "test1";
	char	*str2 = "test1";

	printf("Mon resultat : %d\n", ft_strcmp(str1, str2));
	printf("Le resultat de la librairie : %d", strcmp(str1, str2));

	return (0);
}*/
