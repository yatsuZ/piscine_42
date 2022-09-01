/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzaoui <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:39:37 by yzaoui            #+#    #+#             */
/*   Updated: 2022/08/25 14:15:50 by yzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	convert_exa(unsigned long nbr, char *base, int tour)
{
	if (nbr < 16)
	{
		while (tour-- > 1)
			write(1, "0", 1);
		write(1, &base[nbr], 1);
		return ;
	}
	else
	{
		convert_exa((nbr / 16), base, --tour);
		write(1, &base[nbr % 16], 1);
	}
}

int	to_many_line_lol(char *str, unsigned int t, unsigned int i, int c)
{
	unsigned char	convertisseur;

	if (c)
	{
		convertisseur = (unsigned char) str[t + i];
		if (convertisseur < 16)
			write(1, "0", 1);
		convert_exa(convertisseur, "0123456789abcdef", 1);
	}
	else
		write(1, "    ", 4);
	return (2);
}

void	print_partener(char *str, unsigned int i, unsigned int size)
{
	int				fin;
	unsigned int	t;

	t = 0;
	fin = 0;
	while (t < 16)
	{
		if (fin == 0)
		{
			to_many_line_lol(str, t, i, 1);
			t++;
			if (i + t >= size)
				write(1, "  ", 2);
			else
				to_many_line_lol(str, t, i, 1);
			t++;
		}
		else if (fin)
			t = t + to_many_line_lol(str, t, i, 0);
		write(1, " ", 1);
		if ((i + t) >= size)
			fin = 1;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char			*str;
	unsigned int	i;
	unsigned int	t;

	i = 0;
	str = (char *)addr;
	while (i < size)
	{
		convert_exa(((unsigned long)addr + i), "0123456789abcdef", 16);
		write(1, ": ", 2);
		print_partener(str, i, size);
		t = 0;
		while (t < 16 && t + i < size)
		{
			if (str[i + t] < ' ' || str[i + t] > '~')
				write(1, ".", 1);
			else
				write(1, &str[i + t], 1);
			t++;
		}
		write(1, "\n", 1);
		i = i + 16;
	}
	return (addr);
}
/*
int	main(int argc, char **argv)
{
	char	*test;

	//test = "Bon bah du coup\n\xFF je suis un giga chad	aha\n.";
	test = "\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0a\x0b\x0c\x0d\x0e\x0f\x10";
//	\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f\x20\x21\x22
//	\x23\x24\x25\x26\x27\x28\x29\x2a\x2b\x2c\x2d\x2e\x2f\x30\x31\x32\x33\x34
//	\x35\x36\x37\x38\x39\x3a\x3b\x3c\x3d\x3e\x3f\x40\x41\x42\x43\x44\x45\x46
//	\x47\x48\x49\x4a\x4b\x4c\x4d\x4e\x4f\x50\x51\x52\x53\x54\x55\x56\x57\x58
//	\x59\x5a\x5b\x5c\x5d\x5e\x5f\x60\x61\x62\x63\x64\x65\x66\x67\x68\x69\x6a
//	\x6b\x6c\x6d\x6e\x6f\x70\x71\x72\x73\x74\x75\x76\x77\x78\x79\x7a\x7b\x7c
//	\x7d\x7e\x7f\x80\x81\x82\x83\x84\x85\x86\x87\x88\x89\x8a\x8b\x8c\x8d\x8e
//	\x8f\x90\x91\x92\x93\x94\x95\x96\x97\x98\x99\x9a\x9b\x9c\x9d\x9e\x9f\xa0
//	\xa1\xa2\xa3\xa4\xa5\xa6\xa7\xa8\xa9\xaa\xab\xac\xad\xae\xaf\xb0\xb1\xb2
//	\xb3\xb4\xb5\xb6\xb7\xb8\xb9\xba\xbb\xbc\xbd\xbe\xbf\xc0\xc1\xc2\xc3\xc4
//	\xc5\xc6\xc7\xc8\xc9\xca\xcb\xcc\xcd\xce\xcf\xd0\xd1\xd2\xd3\xd4\xd5\xd6
//	\xd7\xd8\xd9\xda\xdb\xdc\xdd\xde\xdf\xe0\xe1\xe2\xe3\xe4\xe5\xe6\xe7\xe8
//	\xe9\xea\xeb\xec\xed\xee\xef\xf0\xf1\xf2\xf3\xf4\xf5\xf6\xf7\xf8\xf9\xfa
//	\xfb\xfc\xfd";
	if (argc == 2)
		ft_print_memory(argv[1], strlen(argv[1]));
	else
		ft_print_memory(test, strlen(test));
	return (0);
}*/
