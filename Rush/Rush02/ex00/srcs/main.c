/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 12:55:24 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/28 22:31:05 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	main(int argc, char *argv[])
{
	t_dict	*head;
	char	*filepath;

	filepath = "srcs/numbers.dict";
	if (argc == 3)
	{
		head = create_struct(argv[1]);
		if (!head)
			return (0);
		ft_chew(argv[2], head, ft_strlen(argv[2]));
		free_dict(head);
	}
	else if (argc == 2)
	{
		head = create_struct(filepath);
		if (!head)
			return (0);
		ft_chew(argv[1], head, ft_strlen(argv[1]));
		free_dict(head);
	}
	return (0);
}
