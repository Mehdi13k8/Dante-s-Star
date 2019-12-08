/*
** EPITECH PROJECT, 2018
** ma
** File description:
** ma
*/

#include "my.h"

void	aff_map(stack_t *d)
{
	int   x = 0;
	int   y = 0;

	while (d->map[y] != NULL) {
		x = 0;
		while (d->map[y][x] != -1) {
			if (d->map[y][x] != 0)
				my_printf("*");
			else
				my_printf("X");
			x = x + 1;
		}
		if (d->map[y + 1] != NULL)
			my_printf("\n");
		y = y + 1;
	}
}

int	init(stack_t *d)
{
	int   y = 0;

	d->cell = 1;
	if (d->hauteur < 1 || d->largeur < 1) {
		fprintf(stderr, "Too small!!!\n");
		exit(84);
	}
	if ((d->map = malloc(sizeof(int *) * (d->hauteur + 1))) == NULL)
		return (-1);
	while (y < d->hauteur) {
		if (y % 2 != 0)
			create_line_two(y, d);
		else
			create_line(y, d);
		y = y + 1;
	}
	d->map[y] = NULL;
	return (0);
}

void	perfect(stack_t *mv)
{
	int   sv;

	init(mv);
	if (mv->hauteur % 2 == 0) {
		sv = mv->map[mv->hauteur - 2][mv->largeur - 2];
		mv->map[mv->hauteur-1][mv->largeur-1] = sv;
		mv->map[mv->hauteur-1][mv->largeur-2] = sv;
		sv = mv->map[mv->hauteur - 2][mv->largeur - 1];
		if (mv->largeur % 2 != 0)
			mv->map[mv->hauteur-1][mv->largeur-1] = sv;
	}
	else {
		sv = mv->map[mv->hauteur-1][mv->largeur-2];
		if (mv->largeur % 2 == 0)
			mv->map[mv->hauteur-1][mv->largeur-1] = sv;
	}
	choose_way(mv);
	aff_map(mv);
}
