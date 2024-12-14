/*
** EPITECH PROJECT, 2020
** my_print_revalpha.c
** File description:
** my_print_revalpha
*/

int my_strlen(const char *c)
{
    int i = 0;
    for (int y = 0; c[y] != '\0'; y++)
        i++;
    return (i);
}
