/*
** EPITECH PROJECT, 2017
** File Name : my_realloc.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"
#include "gnl.h"

char *my_realloc(char *dest, char *src, int len_src)
{
	int len_dest = my_strlen(dest);
	char *res = malloc(sizeof(char) * (len_dest + len_src + 1));
	int i = 0;

	my_strcpy(res, dest);
	while (i < len_src) {
		res[len_dest + i] = src[i];
		i++;
	}
	res[len_dest + i] = '\0';
	return (res);
}
