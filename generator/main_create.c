/*
** EPITECH PROJECT, 2018
** aze
** File description:
** aze
*/

#include "my.h"

void	create_line_two(int y, stack_t *d)
{
	int   x = 0;

	if ((d->map[y] = malloc(sizeof(int) * (d->largeur + 1))) == NULL)
		exit (84);
	while (x < d->largeur) {
		d->map[y][x] = 0;
		x = x + 1;
	}
	d->map[y][x] = -1;
}

void	create_line(int y, stack_t *d)
{
	int   x = 0;

	if ((d->map[y] = malloc(sizeof(int) * (d->largeur + 1))) == NULL)
		exit(84);
	while (x < d->largeur) {
		if (x % 2 == 0) {
			d->map[y][x] = d->cell;
			d->cell = d->cell + 1;
		}
		else
			d->map[y][x] = 0;
		x = x + 1;
	}
	d->map[y][x] = -1;
}
