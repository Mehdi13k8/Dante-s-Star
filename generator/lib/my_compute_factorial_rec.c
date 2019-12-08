/*
** EPITECH PROJECT, 2017
** my_comput_fact_rec
** File description:
** CPool
*/

#include "my.h"

int	my_compute_factorial_rec(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * my_compute_factorial_rec(nb - 1));
}
