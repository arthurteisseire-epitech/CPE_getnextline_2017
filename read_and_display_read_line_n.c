/*
** EPITECH PROJECT, 2017
** File Name : read_and_display_read_line_n.c
** File description:
** by Arthur Teisseire
*/

#include "my.h"
#include "open.h"
#include "gnl.h"

static int print_to_backspace(char *buffer)
{
	int i = 0;

	while (buffer[i] != '\0') {
		if (buffer[i] == '\n') {
			buffer[i] = '\0';
			my_putstr(buffer);
			return (0);
		}
		i++;
	}
	my_putstr(buffer);
	return (1);
}

void read_and_display_read_line_n(int fd, int n)
{
	char *buffer;

	while ((buffer = read_next_n_bytes(fd, n)) != NULL) {
		if (print_to_backspace(buffer) == 0) {
			free(buffer);
			return;
		}
		free(buffer);
	}
}
