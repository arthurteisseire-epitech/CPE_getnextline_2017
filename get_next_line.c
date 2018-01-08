/*
** EPITECH PROJECT, 2017
** File Name : get_next_line.c
** File description:
** by Arthur Teisseire
*/

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char buffer[READ_SIZE] = "";
	static char *begin = buffer;
	static int size = READ_SIZE;
	char *line = "";
	int index;

	if ((index = find_backspace(begin)) != -1) {
		line = my_realloc(line, begin, index);
		begin += index + 1;
		return (line);
	}
	line = my_realloc(line, begin, my_strlen(buffer));
	while (size == READ_SIZE) {
		size = read(fd, buffer, READ_SIZE);
		begin = buffer;
		line = my_realloc(line, begin, size);
		if (check_line(&begin, line, size))
			return (line);
	}
	free(line);
	return (NULL);
}

char *my_realloc(char *dest, char *src, int len_src)
{
	int len_dest = my_strlen(dest);
	char *res = malloc(sizeof(char) * (len_dest + len_src + 1));
	int i = 0;

	while (dest[i] != '\0') {
		res[i] = dest[i];
		i++;
	}
	i = 0;
	while (i < len_src) {
		res[len_dest + i] = src[i];
		i++;
	}
	res[len_dest + i] = '\0';
	if (*dest != '\0')
		free(dest);
	return (res);
}

int check_line(char **begin, char *line, int size)
{
	int index;
	int last_backspace = my_strlen(line);

	while (last_backspace > 0 && line[last_backspace] != '\n')
		last_backspace--;
	if ((index = find_backspace(line)) != -1 || size < READ_SIZE) {
		line[index] = '\0';
		*begin += find_backspace(*begin) + 1;
		return (1);
	}
	return (0);
}

int find_backspace(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

int my_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
