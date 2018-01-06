/*
** EPITECH PROJECT, 2017
** File Name : my.h
** File description:
** By Arthur Teisseire
*/

#ifndef MY_H
#define MY_H

#include <unistd.h>

void my_putchar(char c);
void my_puterror(char *str);
void my_putstr(char *str);
int my_strlen(char *str);
int my_atoi(char *str);
char *my_strcpy(char *dest, char const *src);
int my_strncpy(char *dest, char *src, int nb);

#endif
