/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ligne.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:50:10 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/20 15:50:31 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ligne(int **tab, int j, int chiffre)
{
	int	flag;

	flag = 0;

	while (flag < 4)
	{
		if (tab[j][flag] == chiffre)
			return 1;
		flag ++;
	}
	return (0);
}

int	col(int **tab, int i, int chiffre)
{
	int	flag;

	flag = 0;

	while (flag < 4)
	{
		if (tab[flag][i] == chiffre)
			return 1;
		flag ++;
	}
	return (0);
}
