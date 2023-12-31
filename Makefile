##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC    =	main.c			\
			do_f_of_x.c	\
			midpoint.c 	\
			trapeze.c 	\
			homere.c	\

OBJ    =    $(SRC:.c=.o)

NAME	=	110borwein

##CFLAGS = -Wall -Wshadow -Wextra -I./include -g

PATH_TO_CHECKER = /home/${USER}/coding-style-checker

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) -lm
clean:
		rm $(OBJ)

fclean: clean
		rm -f $(NAME)

re:		fclean all

tests_run:

git:
	echo -e "*.a\n*.o\n*#*#*\n#*\n.#*\n*~\n" > .gitignore
	echo -e "vgcore*\n*.log\na.out\n.vscode*" >> .gitignore
	echo $(NAME) >> .gitignore

style:
	$(PATH_TO_CHECKER)/coding-style.sh . .
	echo; grep -v MAJOR:C-O1 coding-style-reports.log || true; echo
	rm -f coding-style-reports.log
