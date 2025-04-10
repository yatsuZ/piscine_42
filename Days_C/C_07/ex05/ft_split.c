/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 07:18:03 by yzaoui            #+#    #+#             */
/*   Updated: 2022/09/01 21:17:51 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*create_str(int d, int f, char *str)
{
	char	*new_str;
	int		i;

	i = 0;
	new_str = malloc(sizeof(char) * ((f - d) + 1));
	while (d < f)
	{
		new_str[i++] = str[d];
		d++;
	}
	new_str[i] = '\0';
	return (new_str);
}

int	find_char(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i++])
			return (1);
	}
	return (0);
}

int	nbr_of_word(char *str, char *sep)
{
	int	counter;
	int	i;
	int	debut_mot;

	counter = 0;
	i = 0;
	debut_mot = 1;
	while (str[i])
	{
		if (find_char(str[i], sep))
			debut_mot = 1;
		else
		{
			if (debut_mot)
				counter++;
			debut_mot = 0;
		}
		i++;
	}
	return (counter);
}

void	to_many_line_lol(char *str, char **tab, int i, char *charset)
{
	int		counter_of_word;
	int		comencement;
	int		j;

	counter_of_word = 0;
	comencement = 1;
	while (str[i])
	{
		if (find_char(str[i], charset))
			comencement = 1;
		else
		{
			if (comencement)
			{
				j = i + 1;
				while (str[j] && !find_char(str[j], charset))
					j++;
				tab[counter_of_word++] = create_str(i, j, str);
			}
			comencement = 0;
		}
		i++;
	}
	tab[counter_of_word] = malloc(sizeof(char) * 1);
	tab[counter_of_word] = "\0";
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;

	tab = malloc(sizeof(char *) * (nbr_of_word(str, charset) + 1));
	if (tab == NULL || tab == 0)
		return (NULL);
	to_many_line_lol(str, tab, 0, charset);
	return (tab);
}
/*
// juste pour laffichage des resulta
void	print_tab(char **tab)
{
	while (**tab)
	{
		printf("[%s]\n", *tab);
		tab++;
	}
}

int	main(int argc, char **argv)
{
	char	**test;

	if (argc >= 3)
	{
		test = ft_split(argv[1], argv[2]);
		print_tab(test);
	}
	else
	{
		test = ft_split("fljboerg owrfjoerg wfgnojwrgnf", " ./-");
		print_tab(test);
	}
	test = ft_split("YO", "");
	if (test[1] == NULL)
		printf("Sa termine par un NULL\n");
	return (0);
}*/
