/*
** EPITECH PROJECT, 2017
** my_evil_str.c
** File description:
** evil_str.c
*/

#include "my.h"

char	*my_evil_str(char *str)
{
	int i = 0;
	int j;
	char save;

	j = my_strlen(str) - 1;
	while (i < j) {
		save = str[i];
		str[i] = str[j];
		str[j] = save;
		i = i + 1;
		j = j - 1;
	}
	return (str);
}
