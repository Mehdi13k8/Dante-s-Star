/*
** EPITECH PROJECT, 2017
** strlowcase
** File description:
** strlowcase
*/

#include"my.h"

char	*my_strlowcase(char *str)
{
	int     i = 0;

	while (str[i] != '\0') {
		if (str[i] >= 'A' && str[i] <= 'Z')
			my_putchar(str[i] + 32);
		else
			my_putchar(str[i]);
		i = i + 1;
	}
	return (str);
}
