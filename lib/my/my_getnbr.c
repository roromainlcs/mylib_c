/*
** EPITECH PROJECT, 2020
** my_print_revalpha.c
** File description:
** my_print_revalpha
*/

int get_neg(const char *str, int *neg)
{
    int beg = 0;

    while (str[beg] < '0' || str[beg] > '9') {
        if (str[beg] == '-' && *neg == 0)
            *neg = 1;
        else if (str[beg] == '-' && *neg == 1)
            *neg = 0;
        beg++;
    }
    for (int i = 0; str[i] > '0' && str[i] < '9'; i++) {
        if (i > 11)
            return (-1);
    }
    return (beg);
}

int size_test(const char *str)
{
    int neg = 0;
    int beg = get_neg(str, &neg);
    int nbr = 0;
    int i = beg;

    for (; str[i] >= '0' && str[i] <= '9'; i++);
    i--;
    if (beg == -1) {
        return (1);
    }
    for (int mult = 1; i >= beg; i--) {
        if (str[i] < '0' || str[i] > '9')
            continue;
        nbr += (str[i] - 48) * mult;
        mult *= 10;
        if ((nbr > 147483647 && str[i - 1] >= '2' && neg == 0) || \
            (nbr > 147483648 && str[i - 1] >= '2' && neg == 1))
            return (1);
    }
    return (0);
}

int my_getnbr(const char *str)
{
    int neg = 0;
    int beg = get_neg(str, &neg);
    int nbr = 0;
    int i = beg;

    if (size_test(str) == 1)
        return (0);
    while (str[i] >= '0' && str[i] <= '9')
        i++;
    i--;
    for (int mult = 1; i >= beg; i--) {
        if (str[i] < '0' || str[i] > '9')
            continue;
        nbr += (str[i] - 48) * mult;
        mult *= 10;
    }
    if (neg == 1)
        nbr *= -1;
    return (nbr);
}
