/*
** EPITECH PROJECT, 2018
** aze
** File description:
** azeza
*/

#include "my.h"

void	change_pos(int *yy, int *xx, char **tab2, stack *d)
{
	int y = 0;
	int x = 0;

	while (y < d->hauteur-1) {
		while (tab2[y][x] != '\0') {
			if (tab2[y][x] == '*') {
				*yy = y;
				*xx = x;
				return ;
			}
			x++;
		}
		y++;
	}
}

char	**modif_last_lane(char **tab, stack *d)
{
	int x = 0;
	int y = 0;

	while (y < d->hauteur-1) {
		tab[y][d->largeur-1] = 'X';
		y++;
	}
	while (tab[d->hauteur-1][x] != '\0') {
		x++;
	}
}

char	**maloking(stack *d)
{
	int l = 0, h = 0;
	char    **tab = NULL;
	int y = 0, x = 0;

	if ((tab = malloc(sizeof(char *) * d->hauteur + 1)) == NULL)
		return (NULL);
	while (h < d->hauteur) {
		if ((tab[h] = malloc(sizeof(char) *
		d->largeur + 1)) == NULL)
			return (NULL);
		h++;
	}
	tab = modif_tab(tab, d);
	return (tab);
}

void	cut_gen2(stack *s)
{
	int i = 0;
	if (s->n < 2 && s->j < s->mxj && i == 0)
		s->j++;
	else
		i++;
	if (s->n > 3 && s->i < s->mxi && i == 1)
		s->i++;
	else
		i++;
	if (s->n == 2 && s->j > 0 && i == 2)
		s->j--;
	else
		i++;
	if (s->n == 3 && s->i > 0 && i == 3)
		s->i--;
}
