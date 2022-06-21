/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-dante-guillaume.lemoine
** File description:
** check_ways
*/

#include "../../include/my.h"

int is_right_possible(char **maze, maze_t *data)
{
    if (data->y < (data->y_size - 2) && maze[data->x][data->y + 2] != '*')
        return 1;
    return 0;
}

int is_left_possible(char **maze, maze_t *data)
{
    if (data->y > 1 && maze[data->x][data->y - 2] != '*')
        return 1;
    return 0;
}

int is_down_possible(char **maze, maze_t *data)
{
    if (data->x < (data->x_size - 2) && maze[data->x + 2][data->y] != '*')
        return 1;
    return 0;
}

int is_up_possible(char **maze, maze_t *data)
{
    if (data->x > 1 && maze[data->x - 2][data->y] != '*')
        return 1;
    return 0;
}
