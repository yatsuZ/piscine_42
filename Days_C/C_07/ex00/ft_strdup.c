/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:50:37 by yzaoui            #+#    #+#             */
/*   Updated: 2022/09/01 20:10:53 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*str;

	if (src == NULL)
		return (NULL);
	i = 0;
	size = ft_strlen(src);
	str = malloc(sizeof(char) * (size + 1));
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
void	put_str(char *str)
{
	if (str == NULL)
	{
		write(1, "NULL\n", 5);
		return ;
	}
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	char	*str;
	char	*newstr;

	if (argc == 2)
	{
		str = argv[1];
		newstr = ft_strdup(str);
		put_str(newstr);
		free(newstr);
		free(str);
	}
	newstr = ft_strdup(NULL);
	put_str(newstr);
	return (0);
}*/
