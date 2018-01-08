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

Test(get_next_line, read_line)
{
	int fd = open("data.txt", O_RDONLY);
	char *expected = "Confidence is so overrated.";
	char *got = get_next_line(fd);

	cr_assert_str_eq(got ,expected);
	close(fd);
}
