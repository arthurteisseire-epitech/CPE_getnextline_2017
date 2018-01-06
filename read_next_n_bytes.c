/*
** EPITECH PROJECT, 2017
** File Name : read_next_n_bytes.c
** File description:
** by Arthur Teisseire
*/

#include "my.h"
#include "gnl.h"
#include "open.h"

char *read_next_n_bytes(int fd, int n)
{
	char *res = malloc(sizeof(char) * (n + 1));
	int size;

	if ((size = read(fd, res, n)) != 0) {
		res[size] = '\0';
		return (res);
	}
	free(res);
	return (NULL);
}
