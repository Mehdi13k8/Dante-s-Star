/*
** EPITECH PROJECT, 2017
** strupcase
** File description:
** strupcase
*/

#include "my.h"

char	*my_strupcase(char *str)
{
	int	i = 0;

	while (str[i] != '\0') {
		if (str[i] >= 'a' && str[i] <= 'z')
			my_putchar(str[i] - 32);
		else
			my_putchar(str[i]);
		i = i + 1;
	}
	return (NULL);
}
