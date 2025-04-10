/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 09:15:12 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/28 18:11:10 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srclen;
	unsigned int	destlen;

	i = 0;
	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	if (destlen < size)
		srclen = srclen + destlen;
	else
		srclen = srclen + size;
	if (size > 0)
	{
		while (src[i] && (i + destlen) < size - 1)
		{
			dest[i + destlen] = src[i];
			i++;
		}
		dest[i + destlen] = '\0';
	}
	return (srclen);
}
/*
int	main(void)
{
	prinf("%d",ft_strlcat("jen ai marre", "OUI", 7));
	return (0);
}*/
