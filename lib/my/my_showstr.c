/*
** EPITECH PROJECT, 2020
** file_name.c
** File description:
** function_name
*/
#include <unistd.h>

void my_putchar(char c);

int my_putnbr_base(int nbr, const char *base);

int my_showstr(const char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] < 32 || str[i] == 127)
            my_putnbr_base(str[i], "0123456789ABCDEF");
        my_putchar(str[i]);
    }
    return (0);
}