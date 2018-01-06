/*
** EPITECH PROJECT, 2017
** File Name : read_line_and_display_remaining.c
** File description:
** by Arthur Teisseire
*/

#include "my.h"
#include "open.h"
#include "gnl.h"

static int str_to_backspace(char *buffer)
{
	int i = 0;

	while (buffer[i] != '\0') {
		if (buffer[i] == '\n') {
			my_putstr(&buffer[i]);
			buffer[i] = '\0';
			return (i);
		}
		i++;
	}
	return (i);
}

char *read_line_and_display_remaining(int fd, int n)
{
	char *buffer;
	char *line = "";
	int len;

	while ((buffer = read_next_n_bytes(fd, n)) != NULL) {
		len = str_to_backspace(buffer);
		line = my_realloc(line, buffer, len);
		free(buffer);
		if (len < n)
			return (line);
	}
	return (line);
}
