/*
** EPITECH PROJECT, 2017
** my_compute_square_root
** File description:
** my_compute_square_root
*/

#include"my.h"

int	my_compute_square_root(int nb)
{
	int i = 0;
	int j = 0;

	while (i <= nb) {
		j = i * i;
		if ( j > nb)
			return (0);
		if (j == nb)
			return (i);
		i = i + 1;
	}
	return (0);
}
