/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test2_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:18:47 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/14 21:27:14 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

extern	void	ft_putchar(char *str);
extern	void	rush(int x, int y);

int	len_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
//return la onguer dune string

int	power(int n, int p)
{
	int	resultat;

	if (n == 0 && p != 0)
		return (0);
	resultat = 1;
	while (p != 1)
	{
		resultat = resultat * n;
		p--;
	}
	return (resultat);
}
//n puissance p

int	atoi_positive_only(char *str)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	while (i != len_str(str))
	{
		if (str[i] >= '0' && str[i] <= '9')
			n = (str[i] - 48) * power(10, len_str(str) - i) + n;
		else
		{
			ft_putchar("vous avez envoyer autre qu'un int positive.");
			return (0);
		}
		i++;
	}
	if (n <= -2147483647 || len_str(str) > 9)
	{
		ft_putchar("Valeur trop grande pour un int :).");
		return (0);
	}
	return (n);
}
//transforme un string dint em int return 0 si >= 0

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	x = 10;
	y = 10;
	if (argc == 1)
	{	
		ft_putchar("Voici un carre de base 10 sur 10.\n");
	}
	else if (argc == 2)
	{
		x = atoi_positive_only(argv[1]);
	}
	else if (argc == 3)
	{
		x = atoi_positive_only(argv[1]);
		y = atoi_positive_only(argv[2]);
	}
	rush(x, y);
	return (0);
}
//de 0 a 2147483647
