/*
** EPITECH PROJECT, 2020
** my_print_revalpha.c
** File description:
** my_print_revalpha
*/

char *my_strcat(char *dest, const char *src)
{
    int i = 0;
    int y = 0;

    while (dest[i] != '\0')
        i++;
    while (src[y] != '\0') {
        dest[i] = src[y];
        y++;
        i++;
    }
    return (dest);
}