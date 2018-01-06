/*
** EPITECH PROJECT, 2017
** File Name : get_sentence_chunk_by_chunk.c
** File description:
** by Arthur Teisseire
*/

#include "my.h"
#include "gnl.h"

char *get_sentence_chunk_by_chunk(void)
{
	int len = 5;
	static char *str = "Hello my name is Chucky. Do you want to be my friend?";
	char *res = malloc(sizeof(char) * (len + 1));
	int str_len = my_strlen(str);

	if (*str == '\0')
		return (NULL);
	if (str_len < len)
		len = str_len;
	my_strncpy(res, str, len);
	str += len;
	return (res);
}
