/*
** EPITECH PROJECT, 2017
** my_compute_power_rec.c
** File description:
** power_rec
*/

#include "my.h"

int	my_compute_power_rec(int nb, int power)
{

	if (power == 0)
		return (1);
	if (nb < 0)
		return (0);
	return (nb * my_compute_power_rec(nb, power-1));
}
