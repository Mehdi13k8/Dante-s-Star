/*
** EPITECH PROJECT, 2017
** int_getnbr.c
** File description:
** my_getnbr.c
*/

#include <stdio.h>

int	my_str_isnum(char x)
{
	int	i = 0;

	if (x >= '0' && x <= '9')
		return (1);
}

int	my_getnbr(char *str)
{
	int	i = 0;
	int	nb = 0;
	int	n = 0;

	while (str[i] != '\0') {
		if (str[i] == '-')
			n = n + 1;
		if (my_str_isnum(str[i]) == 1)
			nb = ((nb * 10) + str[i] - 48);
		i = i + 1;
	}
	if (n % 2 != 0)
		nb = -nb;
	return (nb);
}
