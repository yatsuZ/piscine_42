/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-duc <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 10:24:46 by mle-duc           #+#    #+#             */
/*   Updated: 2022/08/28 23:08:15 by mle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H
# include<stdlib.h>
# include<sys/types.h>
# include<sys/stat.h>
# include<fcntl.h>
# include<unistd.h>
# include<stdlib.h>
# include<stdio.h>

typedef struct s_dict	t_dict;
struct s_dict
{
	t_dict	*next;
	char	*value;
	char	*name;
	int		magnitude;
};

void			ft_putmagn(char *s, t_dict *dict);
void			ft_putdigit(char *s, t_dict *dict);
void			ft_putten(char *s, t_dict *dict, int len, char unit[1]);
void			ft_puthundred(char *s, t_dict *dict);
t_dict			*find_cue(char *s, t_dict *dict);
void			ft_chew(char *s, t_dict *dict, int i);
void			ft_dict_sort(t_dict *start);
int				ft_strcmp(char *s1, char *s2);
unsigned long	nbr_of_char(char *nf);
int				ft_strlen(char *str);
void			ft_putnbr(int nb);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			free_dict(t_dict *dict);
t_dict			*create_struct(char *filepath);
char			*ft_strdup(char *str);
char			*ft_strcpy(char *dest, char *src);
char			**ft_split(char *str);
char			*create_txt(char *nf, unsigned long nbr_char, unsigned long i);
void			print_dict(t_dict *head);
int				is_dict_sorted(t_dict *head);
int				dict_contains_dupe(t_dict *start);
int				ft_count_words2(char *str);
char			*ft_strndup(char *str, int n);

#endif
