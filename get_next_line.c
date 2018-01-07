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
	char *line = "";
	int index;
	int size;

	if ((index = find_backspace(begin)) != -1) {
		line = my_realloc(line, begin, index);
		begin += index + 1;
		return (line);
	}
	line = my_realloc(line, begin, my_strlen(buffer));
	while ((size = read(fd, buffer, READ_SIZE)) > 0) {
		begin = buffer;
		line = my_realloc(line, begin, size);
		if (size < READ_SIZE) {
			for (int i = 0; i < READ_SIZE; i++)
				buffer[i] = 0;
			line[find_last_backspace(line)] = '\0';
			return (line);
		}
		if ((index = find_backspace(line)) != -1) {
			line[index] = '\0';
			begin += find_backspace(begin) + 1;
			return (line);
		}
	}
	return (NULL);
}

char *my_realloc(char *dest, char *src, int len_src)
{
	int len_dest = my_strlen(dest);
	char *res = malloc(sizeof(char) * (len_dest + len_src + 1));
	int i = 0;
	int j = 0;

	while (dest[j] != '\0') {
		res[j] = dest[j];
		j++;
	}
	while (i < len_src) {
		res[len_dest + i] = src[i];
		i++;
	}
	res[len_dest + i] = '\0';
	return (res);
}

int find_last_backspace(char *str)
{
	int i = my_strlen(str);

	while (i > 0) {
		if (str[i] == '\n')
			return (i);
		i--;
	}
	return (-1);
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

int main(void)
{
	int fd = open("get_next_line.h", O_RDONLY);
	char *src;

	for (int i = 0; (src = get_next_line(0)); i++) {
		printf("%s\n", src);
	}
	close(fd);
}
