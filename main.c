/*
** EPITECH PROJECT, 2017
** File Name : main.c
** File description:
** by Arthur Teisseire
*/

#include "my.h"
#include "open.h"
#include "gnl.h"

int main(int ac, char **av)
{
	int fd = my_open(av[1]);
	int n = 50;

	if (ac != 2) {
		my_puterror("Invalid number of arguments\n");
		return (84);
	}
	for (int i = 0; i < 15; i++) {
		/* STEP 1
		char *str = read_next_n_bytes(fd, n);
		my_putstr(str);
		free(str);
		*/
		/* STEP 2
		read_and_display_read_line_n(fd, n);
		*/
		/* STEP 3
		char *str = read_line_and_display_remaining(fd, n);
		my_putstr(str);
		free(str);
		*/
		char *str = get_sentence_chunk_by_chunk();
		if (str != NULL) {
			my_putstr(str);
			free(str);
		}
	}
	return (0);
}
