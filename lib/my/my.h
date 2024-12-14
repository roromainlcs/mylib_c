/*
** EPITECH PROJECT, 2020
** file_name.c
** File description:
** function_name
*/
#ifndef _MY_H_
#define _MY_H_

#include <unistd.h>
#include <stdio.h>
#include <stddef.h>

#define _NO_ERROR_ 0
#define _ERROR_ 84

int my_compute_power_rec(int nb, int p);
int my_find_prime_sup(int nb);
int my_compute_square_root(int nb);
int my_getnbr(const char *str);
int my_is_prime(int nb);
int my_isneg(int n);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *src);
int my_showmem(const char *str, int size);
int my_showstr(const char *str);
void my_sort_int_array(int *array, int size);
int my_str_isalpha(const char *str);
int my_str_islower(const char *str);
int my_str_isnum(const char *str);
int my_str_isprintable(const char *str);
int my_str_isupper(const char *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, const char *src);
int my_strcmp(const char *s1, const char*s2);
char *my_strcpy(char *dest, const char *src);
int my_strlen(const char *c);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, const char *src, int n);
int my_strncmp(const char *s1, const char*s2, int n);
char *my_strncpy(char *dest, const char *src, int n);
char *my_strstr(char *str, const char *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
char **my_str_to_word_array(const char *str);
int my_char_isnum(const char c);
int my_putstrerr(char const *str);
char *my_strdup(const char *src);

int error_management(char *expr);
int error_management2(char *expr);
int get_priority(char c);
int last_next_op(int current_op, char *expr, int i, int last_or_next);
int get_result1(int current_op, char *expr, int i);
int get_result2(int current_op, char *expr, int i, int result);
int next_calc(char *expr, int current_op, int beg, int end);
int eval_expr(char *expr);

#endif