/*
** EPITECH PROJECT, 2020
** file_name.c
** File description:
** function_name
*/
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}