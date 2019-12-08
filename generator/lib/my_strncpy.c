/*
** EPITECH PROJECT, 2017
** strncpy
** File description:
** strncpy
*/

#include "my.h"

char	*my_strncpy(char *dest, char const *src, int n)
{
	int	i = 0;

	while (src[i] != '\0' && i < n) {
		dest[i] = src[i];
		i = i + 1;
	}
	return (dest);
}
