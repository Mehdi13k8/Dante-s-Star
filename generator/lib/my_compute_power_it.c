/*
** EPITECH PROJECT, 2017
** my_power_compute_it.c
** File description:
** my_power_compute_it.c
*/

#include"my.h"

int	my_compute_power_it(int	nb, int p)
{
	int	r = 1;

	while (p > 0) {
		r = r * nb;
		p = p - 1;
	}
	return (r);
}
