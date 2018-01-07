/*
** EPITECH PROJECT, 2017
** File Name : test_get_next_line.c
** File description:
** by Arthur Teisseire
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <unistd.h>
#include <fcntl.h>
#include "get_next_line.h"

int fd = -1;

void open_file(void)
{
	fd = open("data.txt", O_RDONLY);
	cr_redirect_stdout();
}

void close_file(void)
{
	if (fd != -1)
		close(fd);
}

Test(get_next_line, read_line, .init = open_file, .fini = close_file)
{
	char *expected = "Confidence is so overrated.";
	char *got = get_next_line(fd);

	cr_assert_str_eq(got ,expected);
}
