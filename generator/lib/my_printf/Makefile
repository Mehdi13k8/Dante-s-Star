##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

CC	= gcc -g3

RM	= rm -f

NAME	= libmy.a

SRCS	=	my_printf.c \
		my_put_adre.c \
		my_put_base_maj.c \
		my_putchar.c \
		my_put_p.c \
		my_put_base.c \
		my_put_basen.c \
		my_put_nbr.c \
		my_putstr.c \
		my_put_nbrneg.c \
		my_put_octa.c \
		count_carac.c \
		my_put_flag.c \

OBJS	= $(SRCS:.c=.o)

#CFLAGS	= -Wall -Wextra -Werror -ansi -pedantic

all:	$(NAME)

$(NAME):$(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS)


fclean: clean
	$(RM) $(NAME)

re: 	fclean all

.PHONY: all clean fclean re
