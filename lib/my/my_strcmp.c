/*
** EPITECH PROJECT, 2020
** file_name.c
** File description:
** function_name
*/
#include <unistd.h>

int my_strcmp(const char *s1, const char*s2)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0')
        i++;
    if (s1[i] == s2[i])
        return (0);
    else if (s1[i] > s2[i])
        return (1);
    return (-1);
}