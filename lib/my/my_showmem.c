/*
** EPITECH PROJECT, 2020
** file_name.c
** File description:
** function_name
*/

int my_strlen1(const char *str);

void my_putchar(char c);

int my_putnbr_base(int nbr, const char *base);

int get_nbnbr(int nbr, char *base)
{
    int size = 0;

    if (nbr < 0)
        size++;
    else if (nbr == 0)
        return (0);
    for (int nb = nbr; nb != 0; nb /= my_strlen1(base))
        size++;
    return (size - 1);
}

void print_adress(int i, const char *str, int size)
{
    int space = 0;
    int y = 0;
    for (; y != 16; i++) {
        if (str[i] < 16 && i < size)
            my_putchar('0');
        if (i < size)
            my_putnbr_base(str[i], "0123456789abcdef");
        else {
            my_putchar(' ');
            my_putchar(' ');
        }
        y++;
        space++;
        if (space == 2) {
            my_putchar(' ');
            space = 0;
        }
    }
}

int print_str(int i, const char *str, int size)
{
    int y = 0;
    while (y != 16 && i != size) {
        if (str[i] < 32 || str[i] == 127)
            my_putchar('.');
        else
            my_putchar(str[i]);
        i++;
        y++;
    }
    for (; y != 16; y++)
        my_putchar('.');
    return (i);
}

int my_showmem(const char *str, int size)
{
    int i = 0;
    while (i != size) {
        for (int y = 0; y != 7 - get_nbnbr(i, "0123456789ABCDEF\0"); y++)
            my_putchar('0');
        my_putnbr_base(i, "0123456789ABCDEF\0");
        my_putchar(':');
        my_putchar(' ');
        print_adress(i, str, size);
        i = print_str(i, str, size);
        my_putchar('\n');
    }
    return (0);
}