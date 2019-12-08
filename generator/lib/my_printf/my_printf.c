/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_printf
*/

#include "../my.h"

int	check_flag(char c)
{
	int	i = 0;
	char	*str = "csdixXbpouS%";

	while (str[i] != 0) {
		if (str[i] == c)
			return (i);
		i = i + 1;
	}
	return (-1);
}

void	put_it(const char *format, int i)
{
	my_putchar('%');
	my_putchar(format[i]);
}

int	my_printf(const char *format, ...)
{
	va_list	ap;
	int	i = 0;

	va_start(ap, format);
	while (format[i] != '\0') {
		if (format[i] == '%' && format[i + 1] != '\0') {
			i = i + 1;
			while (check_flag(format[i]) == -1)
				i = i + 1;
			if (check_flag(format[i]) != -1)
				my_print_param(check_flag(format[i]), ap);
			else if (format[i] != '\0') {
				put_it(format, i);
			}
		} else
			my_putchar(format[i]);
		i = i + 1;
	}
	va_end(ap);
	return (putchar_count() - 1);
}

void	my_print_param(int i, va_list ap)
{
	void	(*tab[12])(va_list);

	tab[0] = &my_putchar_fct;
	tab[1] = &my_putstr_fct;
	tab[2] = &my_put_nbr_fct;
	tab[3] = &my_put_nbr_fct;
	tab[4] = &my_put_base_fct;
	tab[5] = &my_put_maj_fct;
	tab[6] = &my_put_basen_fct;
	tab[7] = &my_put_p_fct;
	tab[8] = &my_put_basp_fct;
	tab[9] = &my_put_nbrneg_fct;
	tab[10] = &my_put_octa_fct;
	tab[11] = &my_put_flag_fct;
	(*tab[i])(ap);
}
