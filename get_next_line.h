/*
** EPITECH PROJECT, 2017
** File Name : get_next_line.h
** File description:
** by Arthur Teisseire
*/

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#ifndef READ_SIZE
#	define READ_SIZE 1
#endif

#include <stdlib.h>
#include <unistd.h>

char *get_next_line(int fd);
char *my_realloc(char *dest, char *src, int len_src);
int my_strlen(char *str);
int find_backspace(char *str);
int check_line(char **begin, char *line, int size);

#endif
