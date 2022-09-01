/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:04:11 by yzaoui            #+#    #+#             */
/*   Updated: 2022/09/01 20:50:55 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

extern int	verif_base(char *str);
extern int	ft_atoi_base(char *str, char *base);

char	*add_signe(char *str)
{
	int		i;
	char	*new_str;

	i = 0;
	while (str[i])
		i++;
	new_str = malloc(sizeof(char) * (i + 2));
	if (new_str == NULL)
		return (NULL);
	new_str[0] = '-';
	i = 0;
	while (str[i])
	{
		new_str[i + 1] = str[i];
		i++;
	}
	new_str[i + 1] = '\0';
	free(str);
	return (new_str);
}

char	*to_mamy_line(long nbr, char *base, int i, int nbr_char)
{
	char	*str;

	str = malloc(sizeof(char) * (nbr_char + 1));
	if (str == 0)
		return (NULL);
	while (i < nbr_char)
	{
		str[i] = ' ';
		i++;
	}
	str[i] = '\0';
	str[0] = base[nbr];
	return (str);
}

char	*conversion_base(long nbr, char *base, int size, int nbr_char)
{
	char	*str;
	int		i;

	if (nbr < 0)
	{
		str = conversion_base(-nbr, base, size, nbr_char);
		if (str == NULL)
			return (NULL);
		return (add_signe(str));
	}
	else if (nbr < size)
		return (to_mamy_line(nbr, base, 0, nbr_char + 1));
	else
	{
		str = conversion_base(nbr / size, base, size, nbr_char + 1);
		i = 0;
		while (str[i] && str[i] != ' ')
			i++;
		str[i] = base[nbr % size];
	}
	return (str);
}

char	*ft_strnbr_base(int nbr, char *base)
{
	int	size;
	int	nb;

	nb = (long) nbr;
	size = 0;
	while (base[size])
		size++;
	if (verif_base(base) == 1)
		return (NULL);
	return (conversion_base(nb, base, size, 0));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	return (ft_strnbr_base(ft_atoi_base(nbr, base_from), base_to));
}
/*
int main(int argc, char *argv[])
{
	char	*str;	

	if (argc < 4)
		return (1);
	str = ft_convert_base(argv[1], argv[2], argv[3]);
	printf("%s \n", str);
	free(str);
	return (0);
}*/
