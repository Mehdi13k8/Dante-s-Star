/*
** EPITECH PROJECT, 2018
** azea
** File description:
** aze
*/

#include "my.h"

char	**init_t(int x, int y)
{
	int   i = 0;
	int   j = 0;
	char  **t = malloc(sizeof(char *) * (y + 1));

	while (j < y) {
		i = 0;
		t[j] = malloc(x + 1);
		while (i < x)
		{
			t[j][i] = 'X';
			i++;
		}
		t[j][i] = '\0';
		j++;
	}
	t[j] = NULL;
	return (t);
}

void	step_1(stack *s)
{
	int idx = 0;

	srand(time(NULL));
	s->t = init_t(s->w, s->h);
	s->i = 0;
	s->j = 0;
	s->t[s->j][s->i] = '*';
	while (s->j != s->h - 1 || s->i != s->w - 1) {
		s->n = rand() % 6;
		if (s->n < 2 && s->j < s->h - 1)
			s->j++;
		if (s->n > 3 && s->i < s->w - 1)
			s->i++;
		if (s->n == 2 && s->j > 0)
			s->j--;
		if (s->n == 3 && s->i > 0)
			s->i--;
		s->t[s->j][s->i] = '*';
	}
}

void	step_2(stack *s)
{
	s->k = 0;
	while (s->k < (s->h + s->w) / 10) {
		s->mxi = rand() % s->w;
		s->mxj = rand() % s->h;
		s->i = rand() % s->w;
		s->j = rand() % s->h;
		while (s->j != s->mxj || s->i != s->mxi) {
			s->n = rand() % 6;
			cut_gen2(s);
			s->t[s->j][s->i] = '*';
		}
		s->k++;
	}
}

void	my_show(char **tab)
{
	int   i = 0;

	while (tab[i] != NULL) {
		printf("%s", tab[i]);
		if (tab[i + 1] != NULL)
			putchar('\n');
		i = i + 1;
	}
}

void	create_not_perfect(stack *s, char **av)
{
	s->w = atoi(av[1]);
	s->h = atoi(av[2]);
	if (s->w < 1 || s->h < 1) {
		fprintf(stderr, "Error: Too small u_U\n");
		exit (84);
	}
	step_1(s);
	step_2(s);
	my_show(s->t);
}
