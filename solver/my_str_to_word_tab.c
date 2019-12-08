/*
** EPITECH PROJECT, 2018
** str to word tab
** File description:
** minishell
*/

#include <solver.h>

int	count_word(char *str, char sep)
{
	int i = 0;
	int n = 1;

	while (str[i] != '\0' && str[i] != '\n') {
		if (str[i] == sep && str[i + 1] != '\0')
			n++;
		i++;
	}
	return (n);
}

int	count_char(char *str, char sep)
{
	int c = 0;

	while ((str[c] != sep) && (str[c] != '\0') && (str[c] != '\n'))
		c++;
	c += 1;
	return (c);
}

char	**cut(char **tab, char *str, char sep)
{
	if ((tab = malloc(sizeof(*tab) *
	((count_word(str, sep) + 8)))) == NULL)
		return (NULL);
}

char	**my_word_array(char *str, char sep, int i)
{
	char **tab;
	int b = 0, a = 0;

	if (cut(tab, str, sep) == NULL)
		return (NULL);
	while (str[i] != '\0') {
		if (str[i] == sep || str[i] == '\n') {
			while (str[i] == sep || str[i] == ' ' || str[i] == '\t')
				i++;
			a = a + 1, b = 0;
		}
		if ((tab[a] = malloc(sizeof(**tab) *
		((count_char(str + i, sep) +1)))) == NULL)
			return (NULL);
		while ((str[i] != sep)  && (str[i] != '\n') && (str[i] != '\0'))
			tab[a][b] = str[i], b++, i++;
		tab[a][b] = '\0';
	}
	tab[a + 1] = 0;
	return (tab);
}
