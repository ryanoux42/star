##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## star
##

SRC	=	main.c	\
		star.c	\
		fonction_star.c

OBJ	=	$(SRC:.c=.o)

NAME	=	star

CFLAGS	=	-Wall -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
