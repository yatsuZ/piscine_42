/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:54:39 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/29 18:57:43 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *c)
{
	while (*c)
		write(1, c++, 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		argc = argc - 1;
		while (argc > 0)
			ft_putstr(argv[argc--]);
	}
	return (0);
}
