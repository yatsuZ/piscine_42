/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 14:21:27 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/21 21:14:19 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	power(int n, int p)
{
	int	resultat;

	if (n == 0 && p != 0)
		return (0);
	resultat = 1;
	while (p != 0)
	{
		resultat = resultat * n;
		p--;
	}
	return (resultat);
}
//fonction de puissance

void	ft_putnbr(int nbr)
{
	char	a;

	if (nbr / 10 == 0)
	{
		a = nbr + 48;
		write(1, &a, 1);
		return ;
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-1 * nbr);
	}
	else
	{
		ft_putnbr(nbr / 10);
		a = (nbr % 10) + 48;
		write(1, &a, 1);
	}
}
//aficher des nbr

int	condition_affichage(int i, int n)
{
	int	before;
	int	after;
	int	p;

	while (n != 0)
	{
		p = 0;
		before = (i / power(10, n - 1)) % 10;
		while (p != n)
		{
			if (p != 0)
			{
				after = (i / power(10, n - p - 1)) % 10;
				if (after <= before)
					return (0);
			}
			p++;
		}
		i = i % power(10, n);
		n--;
	}
	return (1);
}

int	affichagen(int p, int i, int first)
{
	int	stop;

	stop = p;
	if (first)
		write(1, ", ", 2);
	if (power(10, p - 1) > i && i != 0)
		write(1, "0", 1);
	ft_putnbr(i);
	if (stop == 9 && i >= 13456789)
	{
		write(1, ", 023456789, 123456789", 22);
		return (-10);
	}
	return (i);
}

void	ft_print_combn(int n)
{
	int	i;
	int	condition;
	int	first;

	if (n <= 0 || n >= 10)
		return ;
	first = 0;
	i = 0;
	while (i < power(10, n) && i > -1)
	{
		if (n == 8 && i > 23456789)
			return ;
		condition = condition_affichage(i, n);
		if (condition)
		{
			i = affichagen(n, i, first);
			first = 1;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	p;

	printf("entre une puissance --> ");
	scanf("%d", &p);
	ft_print_combn(p);
}*/
