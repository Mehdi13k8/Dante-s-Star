/*
** EPITECH PROJECT, 2017
** my_put_se
** File description:
** my_put_se
*/

#include "../my.h"

void	my_putcharo(int c, int i)
{
	if (c < 10)
		my_putchar(c + '0');
	else
		my_putchar(c % 10 + 'A' * i + 'a' * (1 - i));
}

void	my_put_base(int nb, int bas, int i)
{
	int	cr;

	if (nb < 0) {
		my_putchar('-');
		my_put_base(-nb, bas, i);
	}
	else if (nb < bas && nb >= 0)
		my_putcharo(nb, i);
	else {
		cr = nb % bas;
		my_put_base(nb / bas, bas, i);
		my_putcharo(cr, i);
	}
}

void	my_put_base_fct(va_list ap)
{
	my_put_base(va_arg(ap, unsigned int ), 16, 0);
}
