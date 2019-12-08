/*
** EPITECH PROJECT, 2018
** att
** File description:
** att
*/

#include "../my.h"

int	putchar_count(void)
{
	static int	i = 0;

	i = i + 1;
	return (i);
}
