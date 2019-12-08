/*
** EPITECH PROJECT, 2018
** aze
** File description:
** az
*/

#include "my.h"

int	zero(char **tab2, stack *d)
{
	char **tab = tab2;
	int y = 0, x = 0;
	int zer = 0;

	while (tab[y] != NULL) {
		while (tab[y][x] != '\0') {
			if (tab[y][x] == 'o')
				zer++;
			x++;
		}
		y++;
		x = 0;
	}
	return (zer);
}

int	is_all_num(char *str)
{
	int i = 0;

	while (str[i] != 0) {
		if (str[i] < '0' || str[i] > '9') {
			write(2, "Enter only number\n", 19);
			exit (84);
		}
		i++;
	}
	return (0);
}

void	create_it(stack *d, char **av)
{
	d->hauteur = atoi(av[1]);
	d->largeur = atoi(av[2]);
	if (d->hauteur <= 1 || d->largeur <= 1) {
		write(2, "too small maze\n", 16);
		exit (84);
	}
}

void	aff_tab(char **tab, stack *d)
{
	int i = 0;

	while (tab[i]) {
		printf("%s\n", tab[i]);
		i++;
	}
}

char	**modif_tab(char **tab, stack *d)
{
	int i = 0;
	int col = 0;
	char to_nin = '0';
	int rd = 0;

	while (i != d->hauteur) {
		while (col <= d->largeur-1) {
			tab[i][col] = '*';
			col++;
			tab[i][col] = 0;
		}
		col = 0;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
