/*
** EPITECH PROJECT, 2018
** my_strdup
** File description:
** my_strdup
*/

#include "my.h"

char	*my_strdup(char const *src)
{
	char *temp;

	temp = malloc(sizeof(char) * (my_strlen(src) + 1));
	if (temp == NULL)
		return (NULL);
	temp = my_strcpy(temp, src);
	return (temp);
}
