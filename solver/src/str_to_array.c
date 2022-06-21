/*
** EPITECH PROJECT, 2022
** str_to_array.c
** File description:
** c
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "../../include/my.h"

int find_line_end(char ch)
{
    if (ch == '\n')
        return 0;
    return 1;
}

int calc_lines(char const *str)
{
    int words = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (find_line_end(str[i]) == 0)
            words++;
    }
    return words;
}

int retrieve_size(char const *str, int tar)
{
    int size = 0;

    for (;find_line_end(str[tar]) == 1 && str[tar] != '\0'; tar++)
        size++;
    return size;
}

void edit_var(char const *str, arr_t *arr, int s)
{
    for (;str[(*arr).tar] != str[(*arr).cpy + s]; (*arr).i++) {
        (*arr).arr[(*arr).ind][(*arr).i] = str[(*arr).tar];
        (*arr).tar++;
    }
    (*arr).arr[(*arr).ind][(*arr).i] = '\0';
    (*arr).ind++;
    (*arr).tar++;
    (*arr).i = 0;
}

char **my_str_to_array(char const *str, int *line, int *col)
{
    arr_t arr;
    int w = calc_lines(str);
    int s;

    *line = w;
    arr.arr = malloc(sizeof(char *) * (w + 1));
    arr.i = 0;
    arr.ind = 0;
    arr.tar = 0;
    arr.cpy = 0;
    while (str[arr.tar] != '\0') {
        s = retrieve_size(str, arr.tar);
        arr.arr[arr.ind] = malloc(sizeof(char) * (s + 1));
        arr.cpy = arr.tar;
        edit_var(str, &arr, s);
    }
    *col = s;
    arr.arr[w] = NULL;
    return arr.arr;
}
