/*
** EPITECH PROJECT, 2017
** strstr
** File description:
** strstr.c
*/

#include "my.h"

char	*my_strstr(char *str, char const *to_find)
{
	int	i = 0;
	int	j = 0;

	while (str[i] != '\0') {
		if (str[i] == to_find[j])
			j = 0;
		else
			j = j + 1;
		if (!to_find[j]) {
			i = i - (j - 1);
			return (str + i);
		}
		i = i + 1;
	}
	return (NULL);
}
