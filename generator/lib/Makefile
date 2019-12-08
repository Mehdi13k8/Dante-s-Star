##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

CC	= gcc -g3

RM	= rm -f

NAME	= libmy.a

SRCS	=	$(wildcard *.c) \
		$(wildcard my_printf/*.c)

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
