/*
** EPITECH PROJECT, 2018
** solver.c
** File description:
** solver.c
*/

#include "solver.h"

int	my_tablen(char **tab)
{
	int	i = 0;

	while (tab[i] != NULL) {
		i = i + 1;
	}
	return (i);
}

void	aff_tab(char **tab)
{
	int	i = 0;

	while (tab[i] != 0) {
		printf("%s\n", tab[i]);
		i++;
	}
}

char	**open_file(char **av)
{
	int fd;
	char *buf;
	char **tab;
	struct stat st;

	fd = open(av[1], O_RDONLY);
	stat(av[1], &st);
	buf = malloc(sizeof(char) * st.st_size + 1);
	read(fd, buf, st.st_size);
	buf[st.st_size] = '\0';
	tab = my_word_array(buf, '\n', 0);
	return (tab);
}

int	true_exit(char **tab, int x, int y, int p)
{
	int ret = 0;

	if ((x == (strlen(tab[0])-1)) && (y == (my_tablen(tab)-1)))
		ret = 1;
	if (tab[y][x + 1] != '\0' && tab[y][x + 1] != 'X' &&
	tab[y][x + 1] != '#' && p != 1 && ret == 0)
		ret = true_exit(tab, x + 1, y, 3);
	if (tab[y + 1] != NULL && tab[y + 1][x] != 'X' &&
	tab[y + 1][x] != '#' && p != 2 && ret == 0) {
		ret = true_exit(tab, x, y + 1, 4);
	}
	if ((x - 1) >= 0 && tab[y][x - 1] != 'X' &&
	tab[y][x - 1] != '#' && p != 3 && ret == 0) {
		ret = true_exit(tab, x - 1, y, 1);
	}
	if ((y - 1) >= 0 && tab[y - 1][x] != 'X' &&
	tab[y - 1][x] != '#' && p != 4 && ret == 0) {
		ret = true_exit(tab, x, y - 1, 2);
	}
	return (0);
}

int	main(int ac, char **av)
{
	char	**map = NULL;
	int	x = 0;
	int	y = 0;

	return (84);
	map = open_file(av);
	true_exit(map, x, y, 0);
}
