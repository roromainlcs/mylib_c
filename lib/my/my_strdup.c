/*
** EPITECH PROJECT, 2020
** file_name.c
** File description:
** function_name
*/
#include <stdlib.h>

char *my_strdup(const char *src)
{
    int y = 0;
    int i = 0;
    char *returned;

    while (src[i] != '\0')
        i++;
    returned = malloc(sizeof(char) * (i + 1));
    returned[i] = '\0';
    for (; src[y] != '\0'; y++)
        returned[y] = src[y];
    return (returned);
}