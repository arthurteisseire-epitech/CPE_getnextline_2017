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

Test(get_next_line, long_line)
{
	int fd = open("long_line", O_RDONLY);
	char *expected = ""
	"Si on le rencontre peu souvent sur ce blog, "
	"c’est aussi parce qu’il serait difficile de "
	"le conseiller de prime abord à un utilisateur "
	"lambda pour sa machine personnelle, surtout si "
	"ce dernier provient de l’univers Windows. La matériel "
	"est moins bien et moins vite supporté, il y a moins "
	"d’applications disponibles et il se destine surtout "
	"au monde des serveurs. Mais rien ne dit qu’un jour, vous aussi…";
	char *got = get_next_line(fd);

	cr_assert_str_eq(got ,expected);
	close(fd);
}
