/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-duc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 00:59:58 by mle-duc           #+#    #+#             */
/*   Updated: 2022/08/28 22:09:37 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush.h"

int	ft_count_words(char *str)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i++] == '\n')
			count = count + 2;
	}
	return (count);
}

char	*alloc_key(char *src)
{
	int		i;
	int		len;
	char	*dst;

	i = 0;
	len = 0;
	while (src[len] >= '0' && src[len] <= '9')
		len++;
	dst = malloc(len + 1);
	while (src[i] >= '0' && src[i] <= '9')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}

char	*alloc_name(char *src)
{
	int		i;
	int		len;
	char	*dst;

	i = 0;
	len = 0;
	while ((src[len] > 31 && src[len] < 127) && src[len] != 0)
		len++;
	dst = malloc(len + 1);
	while ((src[i] > 31 && src[i] < 127) && src[i] != 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}

char	**split(char *tmp, int words)
{
	char	**ret;
	int		i;

	i = 0;
	ret = malloc(sizeof(char *) * (words + 1));
	if (!ret)
		return (NULL);
	while (i < words)
	{
		while (*tmp == ' ' || *tmp == 10)
			tmp++;
		ret[i] = alloc_key(tmp);
		while ((*tmp >= '0' && *tmp <= '9') || *tmp == ' ' || *tmp == ':')
			tmp++;
		ret[i + 1] = alloc_name(tmp);
		while ((*tmp > 31 && *tmp < 127) && *tmp != 0)
			tmp++;
		i += 2;
	}
	ret[i] = 0;
	return (ret);
}

char	**ft_split(char *str)
{
	int	nb_words;

	nb_words = ft_count_words(str);
	return (split(str, nb_words));
}
