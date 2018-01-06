/*
** EPITECH PROJECT, 2017
** File Name : my_strncpy.c
** File description:
** by Arthur Teisseire
*/

#include "my.h"

int my_strncpy(char *dest, char *src, int nb)
{
	int i = 0;

	while (i < nb) {
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
