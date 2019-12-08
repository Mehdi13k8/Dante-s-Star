/*
** EPITECH PROJECT, 2018
** azea
** File description:
** azeaz
*/

#include "my.h"
#include <stdio.h>
#include <time.h>

void	map_add_two(stack_t *mv, int a, int b)
{
	int   y = 0;
	int   x = 0;

	while (mv->map[y] != NULL) {
		x = 0;
		while (mv->map[y][x] != -1) {
			if (mv->map[y][x] == b)
				mv->map[y][x] = a;
			x += 1;
		}
		y += 1;
	}
}

void	map_add(stack_t *mv, int y, int x, int a)
{
	int   aa;
	int   b;

	if (a == 0) {
		aa = mv->map[y + 1][x];
		b = mv->map[y - 1][x];
	}
	else {
		aa = mv->map[y][x + 1];
		b = mv->map[y][x - 1];
	}
	mv->map[y][x] = aa;
	map_add_two(mv, aa, b);
}

int	is_way_clear(stack_t *mv)
{
	int   y = 0;
	int   x = 0;
	int   save = mv->map[0][0];

	while (mv->map[y] != NULL) {
		x = 0;
		while (mv->map[y][x] != -1) {
			if (mv->map[y][x] != 0) {
				if (mv->map[y][x] != save)
					return (1);
			}
			x = x + 1;
		}
		y = y + 1;
	}
	return (0);
}

void	choose_way(stack_t *mv)
{
	int   x;
	int   y = 0;

	while (is_way_clear(mv) == 1) {
		x = rand() % mv->largeur;
		y = rand() % mv->hauteur;
		if (mv->map[y + 1] && y > 0 && mv->map[y + 1][x] != 0 &&
		mv->map[y - 1][x] != 0 && mv->map[y][x] == 0 &&
		mv->map[y + 1][x] != mv->map[y - 1][x])
			map_add(mv, y, x, 0);
		else if (x < mv->largeur - 1 && x > 0 && mv->map[y][x + 1] != 0
		&& mv->map[y][x - 1] != 0 && mv->map[y][x] == 0
		&& mv->map[y][x + 1] != mv->map[y][x - 1])
			map_add(mv, y, x, 1);
	}
}

int	main(int ac, char **av)
{
	stack d;
	stack_t dd;
	srand(time(NULL));
	char **tab = NULL;

	is_all_num(av[1]);
	is_all_num(av[2]);
	dd.hauteur = atoi(av[1]);
	dd.largeur = atoi(av[2]);
	if (ac == 3)
		create_not_perfect(&d, av);
	else if (ac == 4 && strcmp(av[3], "perfect") == 0)
		perfect(&dd);
	else
		return (84);
	return (0);
}
