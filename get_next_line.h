/*
** EPITECH PROJECT, 2017
** File Name : get_next_line.h
** File description:
** by Arthur Teisseire
*/

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#ifndef READ_SIZE
#	define READ_SIZE 10
#endif

#include <stdlib.h>
#include <unistd.h>

#include <fcntl.h>
#include <stdio.h>


char *get_next_line(int fd);
char *my_realloc(char *dest, char *src, int len_src);
int my_strlen(char *str);
int find_backspace(char *str);

#endif