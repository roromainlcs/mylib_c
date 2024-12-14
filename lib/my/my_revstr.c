/*
** EPITECH PROJECT, 2020
** file_name.c
** File description:
** function_name
*/

char *my_revstr(char *src)
{
    char box = '0';
    int i = 0;
    int y = 0;

    while (src[y] != '\0')
        y++;
    y--;
    while (i < y) {
        box = src[i];
        src[i] = src[y];
        src[y] = box;
        i++;
        y--;
    }
    return (src);
}