/*
** EPITECH PROJECT, 2020
** my_print_revalpha.c
** File description:
** my_print_revalpha
*/
int my_is_prime2(int nb)
{
    if (nb == 0 || nb == 1)
        return (0);
    for (int i = 2; i < nb - 1; i++) {
        if (nb % i == 0)
            return (0);
    }
    return (1);
}

int my_find_prime_sup(int nb)
{
    int i = nb;
    for (; my_is_prime2(i) == 0; i++);
    return (i);
}
