/*
** EPITECH PROJECT, 2020
** my_print_revalpha.c
** File description:
** my_print_revalpha
*/

int save_condition(int *array, int i2, int save)
{
    if (array[i2] < array[save])
        save = i2;
    return (save);
}

void my_sort_int_array(int *array, int size)
{
    int box = 0;
    int i1 = 0;
    int i2 = 0;
    for (int save = array[i1]; i1 != size; save = array[i1]) {
        while (i2 != size) {
            save = save_condition(array, i2, save);
            i2++;
        }
        box = array[i1];
        array[i1] = array[save];
        array[save] = box;
        i1++;
        i2 = i1;
    }
}
