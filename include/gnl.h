/*
** EPITECH PROJECT, 2017
** File Name : gtn.h
** File description:
** by Arthur Teisseire
*/

#ifndef GTN_H
#define GTN_H

#include <stdlib.h>

char *read_next_n_bytes(int fd, int n);
void read_and_display_read_line_n(int fd, int n);
char *read_line_and_display_remaining(int fd, int n);
char *my_realloc(char *dest, char *src, int len_src);
int get_nb_calls(void);
char *get_sentence_chunk_by_chunk(void);

#endif
