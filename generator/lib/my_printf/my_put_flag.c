/*
** EPITECH PROJECT, 2017
** flag
** File description:
** flag
*/

#include "../my.h"

void	my_put_flag(char c)
{
	c = '%';

	my_putchar(c);
}

void	my_put_flag_fct(va_list ap)
{
	my_put_flag('%');
}
