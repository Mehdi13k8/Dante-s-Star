/*
** EPITECH PROJECT, 2017
** my_strcat.c
** File description:
** strcat
*/

#include "my.h"

char	*my_strcat(char *dest, char const *src)
{
	int	k;
	int	i = 0;

	k = my_strlen(dest);
	while (src[i] != '\0') {
		dest[k] = src[i];
		i = i + 1;
		k = k + 1;
	}
	dest[k] = '\0';
	return (dest);
}
