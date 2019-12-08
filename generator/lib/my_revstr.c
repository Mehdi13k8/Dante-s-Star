/*
** EPITECH PROJECT, 2017
** my_revstr.c
** File description:
** rev_str.c
*/

#include"my.h"

char	*my_revstr(char *str)
{
	int	i = 0;
	int	j;
	char dest;

	j = my_strlen(str) - 1;
	while (j > i) {
		dest = str[i];
		str[i] = str[j];
		str[j] = dest;
		i = i + 1;
		j = j - 1;
	}
	return (str);
}
