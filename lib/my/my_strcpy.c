/*
** EPITECH PROJECT, 2020
** file_name.c
** File description:
** function_name
*/

char *my_strcpy(char *dest, const char *src)
{
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = src[i];
    return (dest);
}