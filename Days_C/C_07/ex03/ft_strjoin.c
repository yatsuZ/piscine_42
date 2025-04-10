/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:17:57 by yzaoui            #+#    #+#             */
/*   Updated: 2022/09/01 20:18:20 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	size_of_evrything(int size, char **strs, int size_sep)
{
	int	i;
	int	big_len;

	big_len = 0;
	i = 0;
	if (size == 0)
		return (0);
	while (i < size)
		big_len += ft_strlen(strs[i++]);
	if (size_sep == 0)
		return (big_len);
	big_len += (size_sep * size) - 1;
	return (big_len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		big_size;
	char	*str;

	if (!strs || !sep)
		return (NULL);
	big_size = size_of_evrything(size, strs, ft_strlen(sep));
	str = malloc(sizeof(char) * (big_size + 1));
	if (!str)
		return (NULL);
	else if (big_size == 0)
		return (str);
	i = 0;
	while (i < size)
	{
		str = ft_strcat(str, strs[i]);
		if (i != size - 1)
			str = ft_strcat(str, sep);
		i++;
	}
	return (str);
}
/*
int	main(int argc, char **argv)
{
	char	*s;

	s = ft_strjoin(argc - 2, argv + 1, argv[argc - 1]);
	printf("%s \n", s);
	free(s);
	return (0);
}*/
