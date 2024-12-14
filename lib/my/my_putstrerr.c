/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** This function displays, one-by-one, the characters of a string.
*/
#include <unistd.h>

int my_putstrerr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        write(2, &str[i], 1);
        i+=1;
    }
    return (0);
}
