/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-duc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 23:48:51 by mle-duc           #+#    #+#             */
/*   Updated: 2022/08/28 20:55:19 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	print_dict(t_dict *head)
{
	t_dict	*temp;

	temp = head;
	while (temp != NULL)
	{
		printf("%s : %s\n", temp->value, temp->name);
		temp = temp->next;
	}
}
