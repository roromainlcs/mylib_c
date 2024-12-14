/*
** EPITECH PROJECT, 2020
** file_name.c
** File description:
** function_name
*/

int my_strncmp(const char *s1, const char*s2, int n)
{
    int i = 0;

    while (s1[i] == s2[i] && i < n && (s1[i] != '\0' || s2[i] != '\0'))
        i++;
    if (s1[i] == s2[i])
        return (0);
    else if (s1[i] > s2[i])
        return (1);
    else
        return (-1);
}