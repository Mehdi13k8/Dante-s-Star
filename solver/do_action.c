/*
** EPITECH PROJECT, 2018
** do_action.c
** File description:
** do_action.c
*/

#include "solver.h"

int	do_right(t_pos *mv)
{
	while (mv->tab[mv->y][mv->x] != 'X' && mv->tab[mv->y][mv->x + 1] != 0)
		mv->x = mv->x + 1;
	return (0);
}

int	do_left(t_pos *mv)
{
	while (mv->tab[mv->y][mv->x] != 'X' || mv->tab[mv->y][mv->x] != 0)
		mv->x = mv->x - 1;
	return (0);
}

int	do_up(t_pos *mv)
{
	int     i = 0;

	while (mv->tab[mv->y][mv->x] != 'X' || mv->tab[mv->y][mv->x] != 0)
		mv->y = mv->y - 1;
	return (0);
}

int	do_low(t_pos *mv)
{
	int     i = 0;
	int     y = 0;

	while (mv->tab[mv->y][mv->x] != 'X' || mv->tab[mv->y][mv->x] != 0)
		mv->y = mv->y + 1;
	return (0);
}
