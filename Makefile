##
## EPITECH PROJECT, 2018
## azeaz
## File description:
## azeaz
##

all:
	cd generator; $(MAKE) all
	cd solver; $(MAKE) all

clean:
	rm -f *~
	rm -f *#
	cd generator; $(MAKE) clean
	cd solver; $(MAKE) clean

fclean: clean
	rm -f $(NAME)
	cd generator; $(MAKE) fclean
	cd solver; $(MAKE) fclean

re: fclean all
	cd generator; $(MAKE) re
	cd solver; $(MAKE) re
