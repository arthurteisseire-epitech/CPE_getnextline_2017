##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Arthur Teisseire
##

CC	=	gcc
DSRC	=	$(realpath .)/
INC	=	$(realpath include)
DLIB	=	$(realpath lib/my)/
LIB	=	my
LIBS	=	-L$(DLIB) -l$(LIB)
SRC     =	$(DSRC)main.c \
		$(DSRC)read_next_n_bytes.c \
		$(DSRC)read_and_display_read_line_n.c \
		$(DSRC)read_line_and_display_remaining.c \
		$(DSRC)my_open.c \
		$(DSRC)get_nb_calls.c \
		$(DSRC)my_realloc.c \
		$(DSRC)get_sentence_chunk_by_chunk.c
CFLAGS	=	-Wall -W -Wextra -I$(INC) -ggdb3
OBJ	=	$(SRC:.c=.o)
NAME	=	gnl

all: $(NAME)

$(NAME):	$(OBJ)
	make -C $(DLIB)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LIBS)

clean:
	make clean -C $(DLIB)
	rm -f $(OBJ)

fclean: clean
	make fclean -C $(DLIB)
	rm -f $(NAME)

re: fclean all
	make clean
