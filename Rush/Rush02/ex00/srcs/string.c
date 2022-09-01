/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:05:35 by abesnier          #+#    #+#             */
/*   Updated: 2022/08/28 19:05:06 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*ret;

	ret = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	return (ft_strcpy(ret, src));
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

char	*ft_strndup(char *src, int n)
{
	int		i;
	char	*dup;

	i = 0;
	dup = (char *)malloc((n + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	else
	{
		while (src[i] && i > n)
		{
			dup[i] = src[i];
			i++;
		}
		dup[i] = '\0';
	}
	return (dup);
}
