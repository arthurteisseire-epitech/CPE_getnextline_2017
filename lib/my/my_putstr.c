/*
** EPITECH PROJECT, 2017
** File Name : my_putstr.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"

void my_putstr(char *str)
{
	write(1, str, my_strlen(str));
}
