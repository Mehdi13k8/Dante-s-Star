/*
** EPITECH PROJECT, 2017
** my_put_base
** File description:
** my_put_base
*/

#include "../my.h"

void	my_putcharc(int c, int i)
{
	if (c < 10)
		my_putchar(c + '0');
	else
		my_putchar(c % 10 + 'A' * i + 'a' * (1 - i));
}

void	my_put_basen(int nb, int bas, int i)
{
	int	cr;

	if (nb < 0) {
		my_putchar('-');
		my_put_basen(-nb, bas, i);
	}
	else if (nb < bas && nb >= 0)
		my_putcharc(nb, i);
	else {
		cr = nb % bas;
		my_put_basen(nb / bas, bas, i);
		my_putcharc(cr, i);
	}
}

void	my_put_basen_fct(va_list ap)
{
	my_put_basen(va_arg(ap, unsigned int), 2, 0);
}
