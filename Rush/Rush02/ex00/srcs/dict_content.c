/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_content.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 12:44:09 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/28 22:47:35 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	dict_contains_dupe(t_dict *start)
{
	t_dict	*temp;
	t_dict	*ptr;

	temp = start->next;
	while (temp->next != NULL)
	{
		ptr = temp->next;
		while (ptr != NULL)
		{
			if (ft_strcmp(temp->value, ptr->value) == 0)
				return (1);
			ptr = ptr->next;
		}
		temp = temp->next;
	}
	return (0);
}

unsigned long	nbr_of_char(char *nf)
{
	int				error;
	int				ret;
	char			buffer[0];
	unsigned long	nbr_char;

	buffer[0] = 0;
	nbr_char = 0;
	error = open(nf, O_RDONLY);
	if (error == -1)
	{
		ft_putstr("OPEN ERROR\n");
		return (0);
	}
	ret = read(error, buffer, 1);
	while (ret)
	{
		buffer[ret] = '\0';
		nbr_char++;
		ret = read(error, buffer, 1);
	}
	if (close(error) == -1)
		return (0);
	return (nbr_char);
}

char	*create_txt(char *nf, unsigned long nbr_char, unsigned long index_txt)
{
	int				error;
	int				ret;
	char			buffer[0];
	char			*txt;

	error = open(nf, O_RDONLY);
	if (nbr_char == 0 || error == -1)
	{
		write(1, "Dict Error\n", 11);
		close(error);
		return (NULL);
	}
	txt = (char *)malloc(sizeof(char) * (nbr_char + 1));
	if (!txt)
		return (0);
	ret = read(error, buffer, 1);
	while (ret)
	{
		buffer[ret] = '\0';
		txt[index_txt++] = buffer[0];
		ret = read(error, buffer, 1);
	}
	if (close(error) == -1)
		return (NULL);
	return (txt);
}
