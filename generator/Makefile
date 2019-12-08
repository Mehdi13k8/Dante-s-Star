##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

CC	= gcc -g3

RM	= rm -f

NAME	= generator

SRCS	=	main.c          \
		main_tw.c      \
		main_tree.c     \
		main_for.c      \
		main_five.c     \
		main_create.c

OBJS	= $(SRCS:.c=.o)

LIB	= ./lib/libmy.a

##CFLAGS	= -Wall -Wextra -Werror -ansi -pedantic

all:	$(NAME)

$(NAME):	##$(OBJS)
	$(MAKE) -C ./lib/
	$(CC) -o $(NAME) $(SRCS) -Llib -lmy

clean:
	$(RM) *# ##$(OBJS)

fclean: clean
	$(RM) $(NAME)

re: 	fclean all

.PHONY: all clean fclean re
