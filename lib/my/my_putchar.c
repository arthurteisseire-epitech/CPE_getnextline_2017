/*
** EPITECH PROJECT, 2017
** File Name : my_putchar.c
** File description:
** By Arthur Teisseire
*/

#include "my.h"

void my_putchar(char c)
{
	write(1, &c, 1);
}
