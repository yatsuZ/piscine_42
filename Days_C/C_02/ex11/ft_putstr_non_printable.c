/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:47:39 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/18 20:19:03 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	convert_exa(int nbr, char *base)
{
	if (nbr < 16)
	{
		write(1, &base[nbr], 1);
		return ;
	}
	else
	{
		convert_exa((nbr / 16), base);
		write(1, &base[nbr % 16], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	int				nbr;
	unsigned char	b;

	b = 0;
	nbr = 0;
	i = 0;
	while (str[i] != '\0')
	{
		b = (unsigned char) str[i];
		if (b < ' ' || b > '~')
		{
			write(1, "\\", 1);
			if (b < 16)
				write(1, "0", 1);
			nbr = b;
			convert_exa(nbr, "0123456789abcdef");
		}
		else
			write(1, &b, 1);
		i++;
	}
}
/*
int	main(void)
{
	unsigned char	b[2];

	b[0] = 155;
	b[1] = 255;
	ft_putstr_non_printable(b);
	return (0);
}*/
