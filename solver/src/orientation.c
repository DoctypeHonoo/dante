/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-dante-guillaume.lemoine
** File description:
** orientation
*/

#include <stdio.h>
#include "../../include/my.h"

int orientate_first_way(char **map, int *i, int *j, int orientation)
{
    if (map[*i][*j + 1] != 'X' && map[*i][*j + 1] != 0) {
        *j += 1;
        return RIGHT;
    }
    if (*i > 0 && map[*i - 1][*j] != 'X') {
        *i -= 1;
        return TOP;
    }
    if (*j > 0 && map[*i][*j - 1] != 'X') {
        *j -= 1;
        return LEFT;
    }
    if (map[*i + 1] && map[*i + 1][*j] != 'X') {
        *i += 1;
        return BOTTOM;
    }
    return orientation;
}

int orientate_second_way(char **map, int *i, int *j, int orientation)
{
    if (map[*i + 1] && map[*i + 1][*j] != 'X') {
        *i += 1;
        return BOTTOM;
    }
    if (map[*i][*j + 1] != 'X' && map[*i][*j + 1] != 0) {
        *j += 1;
        return RIGHT;
    }
    if (*i > 0 && map[*i - 1][*j] != 'X') {
        *i -= 1;
        return TOP;
    }
    if (*j > 0 && map[*i][*j - 1] != 'X') {
        *j -= 1;
        return LEFT;
    }
    return orientation;
}

int orientate_third_way(char **map, int *i, int *j, int orientation)
{
    if (*j > 0 && map[*i][*j - 1] != 'X') {
        *j -= 1;
        return LEFT;
    }
    if (map[*i + 1] && map[*i + 1][*j] != 'X') {
        *i += 1;
        return BOTTOM;
    }
    if (map[*i][*j + 1] != 'X' && map[*i][*j + 1] != 0) {
        *j += 1;
        return RIGHT;
    }
    if (*i > 0 && map[*i - 1][*j] != 'X') {
        *i -= 1;
        return TOP;
    }
    return orientation;
}

int orientate_fourth_way(char **map, int *i, int *j, int orientation)
{
    if (*i > 0 && map[*i - 1][*j] != 'X') {
        *i -= 1;
        return TOP;
    }
    if (*j > 0 && map[*i][*j - 1] != 'X') {
        *j -= 1;
        return LEFT;
    }
    if (map[*i + 1] && map[*i + 1][*j] != 'X') {
        *i += 1;
        return BOTTOM;
    }
    if (map[*i][*j + 1] != 'X' && map[*i][*j + 1] != 0) {
        *j += 1;
        return RIGHT;
    }
    return orientation;
}

void call_orientation(t_orient *o)
{
    if (o->orientation == RIGHT) {
        o->orientation = orientate_second_way(o->map, &o->i, &o->j,
        o->orientation);
        return;
    }
    if (o->orientation == BOTTOM) {
        o->orientation = orientate_third_way(o->map, &o->i, &o->j,
        o->orientation);
        return;
    }
    if (o->orientation == LEFT) {
        o->orientation = orientate_fourth_way(o->map, &o->i, &o->j,
        o->orientation);
        return;
    }
    if (o->orientation == TOP) {
        o->orientation = orientate_first_way(o->map, &o->i, &o->j,
        o->orientation);
        return;
    }
}
