/*
** EPITECH PROJECT, 2020
** my_print_revalpha.c
** File description:
** my_print_revalpha
*/

int my_compute_power_rec(int nb, int p)
{
    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    if (p == 1)
        return (nb);
    return (nb * my_compute_power_rec(nb, p - 1));
}
