/*
** EPITECH PROJECT, 2017
** my_put_adresse.c
** File description:
** my_put_adresse.c
*/

#include "../my.h"

void	my_putcharb(int c, int i)
{
	if (c < 10)
		my_putchar(c + '0');
	else
		my_putchar(c % 10 + 'A' * i + 'a' * (1 - i));
}

void	my_put_baseq(int nb, int bas, int i)
{
	int	cr;

	if (nb < 0) {
		my_putchar('-');
		my_put_baseq(-nb, bas, i);
	}
	else if (nb < bas && nb >= 0)
		my_putcharb(nb, i);
	else {
		cr = nb % bas;
		my_put_baseq(nb / bas, bas, i);
		my_putcharb(cr, i);
	}
}

void	my_put_basp_fct(va_list ap)
{
	my_put_baseq(va_arg(ap, unsigned int ), 8, 0);
}
