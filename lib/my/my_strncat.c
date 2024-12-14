/*
** EPITECH PROJECT, 2020
** my_print_revalpha.c
** File description:
** my_print_revalpha
*/

char *my_strncat(char *dest, const char *src, int n)
{
    int i = 0;
    int y = 0;

    if (n < 0)
        return (dest);
    while (dest[i] != '\0')
        i++;
    while (src[y] != '\0' && y + 1 < n) {
        dest[i] = src[y];
        y++;
        i++;
    }
    return (dest);
}