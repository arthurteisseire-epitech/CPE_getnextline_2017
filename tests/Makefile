##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Arthur Teisseire
##

ROOT	=	$(realpath ..)
DSRC_UT	=	$(realpath .)
DSRC	=	$(ROOT)
INC	=	$(ROOT)

SRC	=	$(DSRC)/get_next_line.c
SRC_UT	=	$(DSRC_UT)/test_get_next_line.c
CFLAGS	=	-Wall -W -Wextra --coverage -I$(INC)
LDFLAGS	=	-lcriterion -lgcov
OBJ	=	$(SRC_UT:.c=.o) $(SRC:.c=.o)
NAME	=	units

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

test_run: re
	./$(NAME)
