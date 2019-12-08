/*
** EPITECH PROJECT, 2018
** solver.h
** File description:
** solver.h
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct s_pos
{
	int	x;
	int	y;
	char	**tab;
}              t_pos;

void	aff_tab(char **tab);
char	**open_file(char **av);
int	count_word(char *str, char sep);
int	count_char(char *str, char sep);
char	**my_word_array(char *str, char sep, int i);
int	do_right(t_pos *mv);
int	do_left(t_pos *mv);
int	do_left(t_pos *mv);
int	do_up(t_pos *mv);
int	do_low(t_pos *mv);
