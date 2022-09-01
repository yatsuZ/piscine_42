extern int	**tableau6_6(void);
extern void	print_tab(int **tab, int option);
extern int verif_args(char **strs, int size);
void	add_args(int **tab, char *str);
void	pre_remplissage_col_up(int **tab);
void	pre_remplissage_col_down(int **tab);
void	pre_remplissage_row_l(int **tab);
void	pre_remplissage_row_r(int **tab);
