/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:19:35 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/14 21:32:12 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern	void	ft_putchar(char *str);

int	diff_str(char *str, char *str1)
{
	int	i;
	int	condition;

	i = 0;
	condition = 1;
	while (condition)
	{
		if (str[i] != str1[i])
		{
			condition = 0;
		}
		else if (str[i] == '\0' || str1[i] == '\0')
		{
			if (str[i] == str1[i])
				return (1);
			condition = 0;
		}
		i++;
	}
	return (0);
}

void	wich_subject_2(int sr, char *place)
{
	char	*same;

	if (diff_str(place, "lt") || diff_str(place, "rb"))
		same = "A";
	else if (diff_str(place, "lb") || diff_str(place, "rt"))
		same = "C";
	else
		same = "B";
	if (sr == 1 && same[0] == 'A')
		same = "/";
	else if (sr == 1 && same[0] == 'C')
		same = "\\";
	else if (sr == 1)
		same = "*";
	ft_putchar(same);
}
/*
deuxieme partie de wich subject car trop long
*/

void	wich_subject(int sr, char *place)
{
	if (sr == 0)
	{
		if (place[0] == 't' || place[0] == 'b')
			ft_putchar("-");
		else if (place[0] == 'l' || place[0] == 'r')
			ft_putchar("|");
		else
			ft_putchar("o");
	}
	else if (sr == 2 || sr == 3)
	{
		if ((diff_str(place, "lt") || diff_str(place, "rt")) && sr == 2)
			ft_putchar("A");
		else if ((diff_str(place, "lb") || diff_str(place, "rb")) && sr == 2)
			ft_putchar("C");
		else if ((diff_str(place, "lt") || diff_str(place, "lb")) && sr == 3)
			ft_putchar("A");
		else if ((diff_str(place, "rt") || diff_str(place, "rb")) && sr == 3)
			ft_putchar("C");
		else
			ft_putchar("B");
	}
	else
		wich_subject_2(sr, place);
}
/*
A partire de sr (quel sujet du rush)
et de la place nous disons quoi afficher.
*/

void	condition_rush(int xm, int ym, int x, int y)
{
	int	subject_rush;

	subject_rush = 2;
	if (ym != 1 && y == 1 && x == 1 && xm != 1)
		wich_subject(subject_rush, "rb");
	else if (y == ym && x == xm)
		wich_subject(subject_rush, "lt");
	else if (y == ym && x == 1)
		wich_subject(subject_rush, "rt");
	else if (y == 1 && x == xm)
		wich_subject(subject_rush, "lb");
	else if (y == 1)
		wich_subject(subject_rush, "b");
	else if (y == ym)
		wich_subject(subject_rush, "t");
	else if (x == 1)
		wich_subject(subject_rush, "r");
	else if (x == xm)
		wich_subject(subject_rush, "l");
	else
		ft_putchar(" ");
}
/*
nous associant des placeon au coordonee x y
*/

void	rush(int x, int y)
{
	int	xmax;
	int	ymax;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	xmax = x;
	ymax = y;
	while (y != 0)
	{
		x = xmax;
		while (x != 0)
		{
			condition_rush(xmax, ymax, x, y);
			x--;
		}
		ft_putchar("\n");
		y--;
	}
}
/*
nous verifions que tout est bon avec x et y puis

nous fesons une une boucle y et x nombre de fois
*/
