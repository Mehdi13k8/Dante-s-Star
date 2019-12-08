/*
** EPITECH PROJECT, 2017
** my_put_base
** File description:
** my_put_base
*/

#include "../my.h"

void	my_putchari(int c, int i)
{
	if (c < 10)
		my_putchar(c + '0');
	else
		my_putchar(c % 10 + 'A' * i + 'a' * (1 - i));
}

void	my_put_basi(unsigned long nb, int bas, int i)
{
	int	cr;

	if (nb < 0) {
		my_putchar('-');
		my_put_basi(-nb, bas, i);
	}
	else if (nb < bas && nb >= 0)
		my_putchari(nb, i);
	else {
		cr = nb % bas;
		my_put_basi(nb / bas, bas, i);
		my_putchari(cr, i);
	}
}

void	my_put_p_fct(va_list ap)
{
	my_putchar('0');
	my_putchar('x');
	my_put_basi(va_arg(ap, unsigned long), 16, 0);
}
