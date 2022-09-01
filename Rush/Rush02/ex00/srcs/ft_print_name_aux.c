/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_name_aux.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:36:33 by abesnier          #+#    #+#             */
/*   Updated: 2022/08/28 23:13:21 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_putmagn(char *s, t_dict *dict)
{
	t_dict	*temp;

	temp = dict;
	temp = find_cue(s, temp);
	ft_putchar (' ');
	ft_putstr(temp->name);
}

void	ft_putdigit(char *s, t_dict *dict)
{
	int		i;
	char	c[1];
	t_dict	*temp;

	i = ft_strlen(s);
	c[0] = s[0];
	temp = dict;
	while (ft_strcmp(temp->value, c) != 0)
		temp = temp->next;
	if (i > 0 && temp->value != 0)
		ft_putstr(temp->name);
	if (i > 3)
	{
		ft_putmagn(s, temp);
		ft_putchar(' ');
	}
}

void	ft_putten(char *s, t_dict *dict, int len, char unit[1])
{
	t_dict	*temp;
	char	ten[2];

	temp = dict;
	ten[0] = s[0];
	ten[1] = s[1];
	if (ten[0] != '1' && ten[0] != '0')
	{
	ten[1] = '0';
	unit[0] = s[1];
	}
	while (ft_strcmp(temp->value, ten) != 0 && ten[0] != '0')
		temp = temp->next;
	if (temp->name)
		ft_putstr(temp->name);
	if (unit[0] != '0')
	{
		ft_putchar(' ');
		ft_putdigit(++s, dict);
	}
	if (len > 3 && unit[0] == 0)
	{
		ft_putmagn(s, dict);
		ft_putchar(' ');
	}
}

void	ft_puthundred(char *s, t_dict *dict)
{
	char	c[1];
	char	*h;
	t_dict	*temp;
	char	*str;

	str = "100";
	h = ft_strdup(str);
	c[0] = s[0];
	temp = dict;
	while (ft_strcmp(temp->value, h) != 0)
		temp = temp->next;
	ft_putdigit(c, dict);
	ft_putchar(' ');
	ft_putstr(temp->name);
	ft_putchar(' ');
	free(h);
}
