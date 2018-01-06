/*
** EPITECH PROJECT, 2017
** File Name : my_open.c
** File description:
** by Arthur Teisseire
*/

#include "my.h"
#include "open.h"

int my_open(char const *filepath)
{
	int fd = open(filepath, O_RDONLY);

	if (fd == -1) {
		my_puterror("Error when opening file\n");
		exit(84);
	}
	return (fd);
}
