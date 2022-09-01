/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigny <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 12:10:04 by jvigny            #+#    #+#             */
/*   Updated: 2022/08/20 15:48:24 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "main.h"

int	verif_args(char **str, int size)
{
    int     i;
    int     arg;

    arg = 0;
    i = 0;
    if (size != 2)
    {
        write(1, "Error", 5);
        return (0);
    }
    while (str[1][i])
    {
	    if (str[1][i] < '0' || str[1][i] > '4')
		    return (0);
	    i++;
	    arg++;
	    if (str[1][i] == '\0')
		    break ;
	    if (str[1][i] != ' ')
		    return (0);
	    i++;
    }
    if (arg != 4*4)
	    return (0);
    return (1);
}
//verifie les argument de argc et argv
//size = argc et str = argv
