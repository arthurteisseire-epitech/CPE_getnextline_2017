/*
** EPITECH PROJECT, 2017
** File Name : test_get_next_line_3.c
** File description:
** by Arthur Teisseire
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <unistd.h>
#include <fcntl.h>
#include "get_next_line.h"

int fd_3 = -1;

void close_file(void);

void open_file_3(void)
{
	fd_3 = open("long_text", O_RDONLY);
	cr_redirect_stdout();
}

Test(get_next_line, long_text, .init = open_file_3, .fini = close_file)
{
	char *expected = "Si on le rencontre peu souvent sur ce blog,\n"
	"c’est aussi parce qu’il serait difficile de\n"
	"le conseiller de prime abord à un utilisateur\n"
	"lambda pour sa machine personnelle, surtout si\n"
	"ce dernier provient de l’univers Windows. La matériel\n"
	"est moins bien et moins vite supporté, il y a moins\n"
	"d’applications disponibles et il se destine surtout\n"
	"au monde des serveurs. Mais rien ne dit qu’un jour, vous aussi…\n";
	char *got = get_next_line(fd_3);
	char *res = "";

	while (got) {
		res = my_realloc(res, got, my_strlen(got));
		res = my_realloc(res, "\n", 1);
		free(got);
		got = get_next_line(fd_3);
	}
	cr_assert_str_eq(res ,expected);
}