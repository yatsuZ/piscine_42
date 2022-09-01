/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-duc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 16:59:44 by mle-duc           #+#    #+#             */
/*   Updated: 2022/08/28 20:55:07 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	swap(t_dict *dict1, t_dict *dict2)
{
	char	*temp1;
	char	*temp2;
	int		temp3;

	temp1 = dict1->value;
	temp2 = dict1->name;
	temp3 = dict1->magnitude;
	dict1->value = dict2->value;
	dict1->name = dict2->name;
	dict1->magnitude = dict2->magnitude;
	dict2->value = temp1;
	dict2->name = temp2;
	dict2->magnitude = temp3;
}

int	compare_dict_values(char *value1, char *value2)
{
	if ((ft_strlen(value1) == ft_strlen(value2)
			&& ft_strcmp(value1, value2) > 0)
		|| ft_strlen(value1) > ft_strlen(value2))
		return (0);
	else
		return (1);
}

int	is_dict_sorted(t_dict *head)
{
	t_dict	*temp;

	temp = head;
	if (temp == NULL)
		return (0);
	while (temp->next != NULL)
	{
		if (!compare_dict_values(temp->value, (temp->next)->value))
			return (0);
		temp = temp->next;
	}
	return (1);
}

void	ft_dict_sort(t_dict *start)
{
	t_dict	*dict1;
	t_dict	*lptr;

	lptr = NULL;
	if (start == NULL)
		return ;
	while (!is_dict_sorted(start))
	{
		dict1 = start;
		while (dict1->next != lptr)
		{
			if (!compare_dict_values(dict1->value, dict1->next->value))
				swap(dict1, dict1->next);
			dict1 = dict1->next;
		}
		lptr = dict1;
	}
}
