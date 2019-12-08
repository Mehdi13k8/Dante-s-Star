/*
** EPITECH PROJECT, 2018
** matchstick.h
** File description:
** matchstick.h
*/

#ifndef MY_MATCHSTICK_H_
# define MY_MATCHSTICK_H_

#include "my.h"
#include "get_next_line.h"
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

typedef struct s_struct
{
	int		x;
	int		y;
	int		val;
	int		turn;
	int		max;
	char		**map;
	char		*line;
}		t_struct;

char	*get_next_line(const int fd);
int	my_tablen(char **tab);
void	aff_star(int nb_line);
int	end_game(t_struct *mv);
void	aff_map_x(char *str, int espace);
void	aff_map(char **map);
char	**create_map(int nb_line);
int	check_sign(t_struct *mv);
int	match(t_struct *mv, int i);
int	line(int i);
int	match_val(int i);
int	erro_num(t_struct *mv);
int	check_stick(t_struct *mv);
int	all_error(t_struct *mv, char *str);
int	matchstick(t_struct *mv);
void	delete_match(t_struct *mv, char *str);
int	turn_ia(t_struct *mv);
int	my_turn(t_struct *mv);

#endif /* !MY_MATCHSTICK_H_ */
