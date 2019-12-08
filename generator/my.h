/*
** EPITECH PROJECT, 2018
** aze
** File description:
** maa
*/

#ifndef MY_H
#define MY_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

typedef struct stru
{
	int	largeur;
	int	hauteur;
	int	w;
	int	h;
	int	i;
	int	j;
	int	mxi;
	int	mxj;
	int	mni;
	int	mnj;
	int	n;
	int	k;
	char	**t;
	char	**map;
}stack;

typedef struct  s_struct
{
	int           hauteur;
	int           largeur;
	int           cell;
	int           **map;
}stack_t;

int	main(int ac, char **av);
void	create_not_perfect(stack *d, char **av);
void	create_line_two(int y, stack_t *m);
void	create_line(int y, stack_t *m);
void	choose_way(stack_t *mv);
void	perfect(stack_t *mv);
int	is_all_num(char *str);
char	**modif_tab(char **tab, stack *d);
void	cut_gen2(stack *s);
int	my_printf(char *s, ...);

#endif
