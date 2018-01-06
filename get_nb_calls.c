/*
** EPITECH PROJECT, 2017
** File Name : get_nb_calls.c
** File description:
** by Arthur Teisseire
*/

int get_nb_calls(void)
{
	static int nb_calls = 0;

	nb_calls++;
	return (nb_calls);
}
