/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-dante-guillaume.lemoine
** File description:
** random_way
*/

#include <stdlib.h>
#include "../../include/my.h"

int random_way(char **maze, maze_t *data)
{
    int random;

    is_movement_possible(maze, data);
    if (data->moovin == 0)
        return 4;
    while (42) {
        random = rand() % 4;
        if (random == 0 && is_right_possible(maze, data)
        && data->oldpath != 2)
            return 0;
        if (random == 1 && is_down_possible(maze, data) && data->oldpath != 3)
            return 1;
        if (random == 2 && is_left_possible(maze, data) && data->oldpath != 0)
            return 2;
        if (random == 3 && is_up_possible(maze, data) && data->oldpath != 1)
            return 3;
    }
    return 4;
}
