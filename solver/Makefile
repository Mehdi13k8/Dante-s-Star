##
## EPITECH PROJECT, 2018
## aze
## File description:
## azeaz
##

NAME	= solver

CC	= gcc -g3

RM	= rm -f

SRCS	=	./solver.c \
		./my_str_to_word_tab.c \
		./do_action.c \

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I./
##CFLAGS += -W -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
