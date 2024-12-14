/*
** EPITECH PROJECT, 2020
** my_print_revalpha.c
** File description:
** my_print_revalpha
*/

int my_compute_square_root(int nb)
{
    int i = 0;
    for (; i * i != nb; i++) {
        if (i >= nb)
            return (0);
    }
    return (i);
}
