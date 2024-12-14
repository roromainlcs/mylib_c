/*
** EPITECH PROJECT, 2020
** file_name.c
** File description:
** function_name
*/

char *my_strncpy(char *dest, const char *src, int n)
{
    int i = 0;

    if (n == 0)
        return (dest);
    while (i != n) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}