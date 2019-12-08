/*
** EPITECH PROJECT, 2017
** libmy.h
** File description:
** libmy.h
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int	my_isneg(int nb);
void	my_swap(int *a, int *b);
int	my_strlen(char const *str);
char	*my_strdup(char const *src);
int	my_getnbr(char const *str);
void	my_sort_int_array(int *tab, int size);
int	my_compute_power_rec(int nb, int power);
int	my_compute_square_root(int nb);
int	my_is_prime(int nb);
int	my_find_prime_sup(int nb);
char	*my_strcpy(char *dest, char const *src);
char	*my_strncpy(char *dest, char const *src, int n);
char	*my_revstr(char *str);
char	*my_strstr(char *str, char const *to_find);
int	my_strcmp(char const *s1, char const *s2);
int	my_strncmp(char const *s1, char const *s2, int n);
char	*my_strupcase(char *str);
char	*my_strlowcase(char *str);
char	*my_strcapitalize(char *str);
int	my_str_isalpha(char const *str);
int	my_str_isnum(char const *str);
int	my_str_islower(char const *str);
int	my_str_isupper(char const *str);
int	my_str_isprintable(char const *str);
int	my_showstr(char const *str);
int	my_showmem(char const *str, int size);
char	*my_strcat(char *dest, char const *src);
char	*my_strncat(char *dest, char const *src, int nb);

void	my_putchar_fct(va_list	ap);
void	my_put_nbr_fct(va_list	ap);
void	my_putstr_fct(va_list	ap);
int	check_flag(char	c);
void	printext(char *str, ...);
void	my_print_param(int i, va_list ap);
int	my_putchar(char);
void	my_put_base_fct(va_list ap);
void	my_put_basen_fct(va_list ap);
void	my_put_maj_fct(va_list ap);
void	my_put_basp_fct(va_list ap);
void	my_putcharp(int c, int i);
void	my_put_base(int nb, int base, int i);
void	my_put_p_fct(va_list ap);
void	my_put_nbrneg_fct(va_list ap);
void	my_put_octa_fct(va_list ap);
int	my_printf(const char *format, ...);
void	my_putchar_fct(va_list ap);
int	space(char *str);
void	my_putstr(char *);
int	putchar_count();
void	my_put_flag_fct(va_list ap);
int	check_space(char *str, int i, va_list ap);
