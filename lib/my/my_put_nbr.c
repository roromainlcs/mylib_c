/*
** EPITECH PROJECT, 2020
** my_print_revalpha.c
** File description:
** my_print_revalpha
*/

#include <unistd.h>

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int modulo = 10;
    int nb_cp = nb;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
        nb_cp = nb;
    }
    while (modulo <= nb) {
        modulo *= 10;
    }
    while (modulo >= 10) {
        nb_cp = nb_cp % modulo;
        nb_cp = nb_cp / (modulo / 10);
        my_putchar(nb_cp + 48);
        modulo /= 10;
        nb_cp = nb;
    }
    return (0);
}
