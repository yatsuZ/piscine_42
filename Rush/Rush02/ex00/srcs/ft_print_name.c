/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_name.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 00:33:49 by abesnier          #+#    #+#             */
/*   Updated: 2022/08/28 23:22:15 by abesnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

t_dict	*find_cue(char *s, t_dict *dict)
{
	int		i;
	int		delta;
	t_dict	*temp;

	i = ft_strlen(s);
	temp = dict;
	while (i > temp->magnitude)
		temp = temp->next;
	if (i != temp->magnitude && i > 4)
	{
		delta = temp->magnitude - i;
		temp = dict;
		i = i - 3 + delta;
		while (i > temp->magnitude)
			temp = temp->next;
	}
	return (temp);
}

void	acrementation(int *i, char *s)
{
	(*i) = (*i) - 1;
	s++;
}

void	ft_chew(char *s, t_dict *dict, int i)
{
	int		delta;
	t_dict	*cue;

	cue = find_cue(s, dict);
	delta = i - cue->magnitude;
	if (*s == '0' && *(s - 1) == 0)
		acrementation(&i, s);
	if (delta == 2 || i == 3)
	{
		ft_puthundred(s++, dict);
			i--;
	}
	else if (delta == 1 || i == 2)
	{
		ft_putten(s, dict, i, "0");
		s += 2;
		i -= 2;
	}
	else if (delta == 0 || *s != '0')
	{
		ft_putdigit(s++, dict);
			i--;
	}
	if (i > 0)
		ft_chew(s, dict, i);
}
