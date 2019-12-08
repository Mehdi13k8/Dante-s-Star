/*
** EPITECH PROJECT, 2017
** my_factorial_it
** File description:
** factorial_it
*/

#include "my.h"

int	my_compute_factorial_it(int nb)
{
	int	i;

	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	i = nb - 1;
	while (i > 0) {
		nb = nb * i;
		i = i - 1;
	}
	return (nb);
}
