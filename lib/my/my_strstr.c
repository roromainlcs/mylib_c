/*
** EPITECH PROJECT, 2020
** file_name.c
** File description:
** function_name
*/
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

char *my_strstr(char *str, const char *to_find)
{
    int f = 0;
    int y = 0;
    int i = 0;
    if (to_find[0] == '\0')
        return (str);
    while (str[i] != '\0') {
        while (to_find[f] == str[y] && to_find[f] != '\0') {
            f++;
            y++;
        }
        if (to_find[f] == '\0')
            return (&str[i - 1]);
        f = 0;
        y = i;
        i++;
    }
    return (NULL);
}