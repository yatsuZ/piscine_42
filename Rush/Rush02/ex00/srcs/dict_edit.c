/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_edit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 12:44:09 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/28 22:48:09 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	free_dict(t_dict *dict)
{
	if (dict == NULL)
	{
		free(dict);
		return ;
	}
	free(dict->value);
	free(dict->name);
	free_dict(dict->next);
	free(dict);
}

void	free_tab(char **ret)
{
	int	i;

	i = 0;
	while (ret[i] != 0)
	{
		free(ret[i]);
		i++;
	}
	free(ret[i]);
	free(ret);
}

t_dict	*assign(char **tab)
{
	t_dict	*create;
	t_dict	*head;
	int		i;

	i = -1;
	create = malloc(sizeof(t_dict));
	head = create;
	while (tab[++i] != 0)
	{
		if (i % 2 == 0)
		{
			if (i != 0)
				create = create->next;
			create->next = malloc(sizeof(t_dict));
			if (!create->next)
				return (0);
			create->value = ft_strdup(tab[i]);
			create->magnitude = ft_strlen(tab[i]);
		}
		else if (i % 2 == 1)
			create->name = ft_strdup(tab[i]);
	}
	create->next = NULL;
	return (head);
}

t_dict	*create_struct(char *filepath)
{
	t_dict	*head;
	char	*txt;
	char	**split;

	txt = create_txt(filepath, nbr_of_char(filepath), 0);
	if (!txt)
		return (NULL);
	split = ft_split(txt);
	head = assign(split);
	free(txt);
	free_tab(split);
	return (head);
}
