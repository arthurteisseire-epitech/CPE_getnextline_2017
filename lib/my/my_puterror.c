/*
** EPITECH PROJECT, 2017
** File Name : my_puterror.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"

void my_puterror(char *str)
{
	write(2, str, my_strlen(str));
}
