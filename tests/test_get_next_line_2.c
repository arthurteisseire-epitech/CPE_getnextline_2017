/*
** EPITECH PROJECT, 2017
** File Name : test_get_next_line_2.c
** File description:
** by Arthur Teisseire
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <unistd.h>
#include <fcntl.h>
#include "get_next_line.h"

int fd_2 = -1;

void close_file(void);

void open_file_2(void)
{
	fd_2 = open("long_text", O_RDONLY);
	cr_redirect_stdout();
}

Test(get_next_line, long_text, .init = open_file_2, .fini = close_file)
{
	char *expected = ""
	"Si on le rencontre peu souvent sur ce blog, "
	"c’est aussi parce qu’il serait difficile de "
	"le conseiller de prime abord à un utilisateur "
	"lambda pour sa machine personnelle, surtout si "
	"ce dernier provient de l’univers Windows. La matériel "
	"est moins bien et moins vite supporté, il y a moins "
	"d’applications disponibles et il se destine surtout "
	"au monde des serveurs. Mais rien ne dit qu’un jour, vous aussi…";
	char *got = get_next_line(fd_2);

	cr_assert_str_eq(got ,expected);
}
