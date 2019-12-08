/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** my_putstr.c
*/

#include "../my.h"

void	my_putstr(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		my_putchar(str[i]);
		i = i + 1;
	}
}

void	my_putstr_fct(va_list ap)
{
	char *str = va_arg(ap, char *);
	if (str == NULL)
		my_putstr("(null)");
	else
		my_putstr(str);
}
