/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-dante-guillaume.lemoine
** File description:
** moove_maze
*/

#include "../../include/my.h"

void is_movement_possible(char **maze, maze_t *data)
{
    data->moovin = 0;
    if (is_right_possible(maze, data) && data->oldpath != 2)
        data->moovin++;
    if (is_down_possible(maze, data) && data->oldpath != 3)
        data->moovin++;
    if (is_left_possible(maze, data) && data->oldpath != 0)
        data->moovin++;
    if (is_up_possible(maze, data) && data->oldpath != 1)
        data->moovin++;
}

void moove_maze_2(char **maze, maze_t *data, int direction)
{
    if (direction == 2) {
        if (data->moovin > 1)
            node_push_front(&data->corner, data->x, data->y, data->oldpath);
        maze[data->x][--data->y] = '*';
        maze[data->x][--data->y] = '*';
        data->oldpath = 2;
    }
    if (direction == 3) {
        if (data->moovin > 1)
            node_push_front(&data->corner, data->x, data->y, data->oldpath);
        maze[--data->x][data->y] = '*';
        maze[--data->x][data->y] = '*';
        data->oldpath = 3;
    }
    if (direction == 4) {
        data->x = data->corner->x;
        data->y = data->corner->y;
        data->oldpath = data->corner->oldpath;
        node_pop_front(&data->corner);
    }
}

void moove_maze(char **maze, maze_t *data, int direction)
{
    if (direction == 0) {
        if (data->moovin > 1)
            node_push_front(&data->corner, data->x, data->y, data->oldpath);
        maze[data->x][++data->y] = '*';
        maze[data->x][++data->y] = '*';
        data->oldpath = 0;
    }
    if (direction == 1) {
        if (data->moovin > 1)
            node_push_front(&data->corner, data->x, data->y, data->oldpath);
        maze[++data->x][data->y] = '*';
        maze[++data->x][data->y] = '*';
        data->oldpath = 1;
    }
    moove_maze_2(maze, data, direction);
}
