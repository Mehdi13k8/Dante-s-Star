/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** my_put_nbr
*/

#include "../my.h"

void	my_put_nbrr(unsigned int nb)
{
	int	result;
	int	civ;

	if (nb < 0) {
		my_putchar('-');
		nb = nb * -1;
	}
	civ = 1;
	while ((nb / civ) >= 10)
		civ = civ * 10;
	while (civ > 0) {
		result = (nb / civ ) % 10;
		my_putchar( 48 + result);
		civ = civ / 10;
	}
}

void	my_put_nbrneg_fct(va_list ap)
{
	my_put_nbrr(va_arg(ap, unsigned int));
}
