/*
** EPITECH PROJECT, 2017
** my_put_octa
** File description:
** my_put_octa
*/

#include "../my.h"

void	my_put_octa(char *str)
{
	int	i = 0;

	while (str[i] != '\0') {
		if (str[i] < 32 || str[i] == 127) {
			my_putchar('\\');
			if (str[i] < 8)
				my_putstr("00");
			else if (str[i] > 8 && str[i] < 32)
				my_putchar('0');
			my_put_base(str[i], 8, 0);
		}
		else
			my_putchar(str[i]);
		i = i + 1;
	}
}

void	my_put_octa_fct(va_list ap)
{
	my_put_octa(va_arg(ap, char *));
}
