/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 12:31:13 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/20 17:18:08 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main(int argc, char **argv)
{
	int	**tab;
	if (verif_args(argv, argc))
	{
		tab = tableau6_6();
		print_tab(tab, 0);
		add_args(tab, argv[1]);
		pre_remplissage_col_up(tab);
		pre_remplissage_row_l(tab);
		pre_remplissage_row_r(tab);
		pre_remplissage_col_down(tab);
		print_tab(tab, 1);

	}
	return (0);
}
