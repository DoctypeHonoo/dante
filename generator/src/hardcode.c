/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-dante-guillaume.lemoine
** File description:
** hardcode
*/

#include <stdlib.h>
#include "../../include/my.h"

int redirect_2(char **maze)
{
    int a = 0;

    for (int i = 0; maze[i]; i++) {
        if (a++)
            my_printf("\n");
        my_printf("%s", maze[i]);
    }
    return 0;
}

int redirect(char **maze, maze_t *data, char **argv, int argc)
{
    if (argc == 3) {
        my_maze(maze, data);
        remove_some_x(maze, data);
        for (int i = 0; maze[i]; i++)
            my_printf("%s\n", maze[i]);
        return 0;
    }
    if (my_strcmp("perfect", argv[3]) == 0) {
        my_maze(maze, data);
        return redirect_2(maze);
    }
    return 84;
}

int with_2_2(char **maze, maze_t *data, char **argv, int argc)
{
    int random = rand() % 2;

    if (data->x_size == 2 && data->y_size == 2) {
        maze[0][0] = '*';
        if (random)
            maze[0][1] = '*';
        else
            maze[1][0] = '*';
        maze[1][1] = '*';
        my_printf("%s\n%s", maze[0], maze[1]);
        return 0;
    }
    return redirect(maze, data, argv, argc);
}

int with_1_2(char **maze, maze_t *data, char **argv, int argc)
{
    if (data->x_size == 1 && data->y_size == 2) {
        maze[0][0] = '*';
        maze[0][1] = '*';
        my_printf("%s", maze[0]);
        return 0;
    }
    if (data->x_size == 2 && data->y_size == 1) {
        maze[0][0] = '*';
        maze[1][0] = '*';
        my_printf("%s\n%s", maze[0], maze[1]);
        return 0;
    }
    return with_2_2(maze, data, argv, argc);
}

int with_1_1(char **maze, maze_t *data, char **argv, int argc)
{
    if (data->x_size == 1 && data->y_size == 1) {
        maze[0][0] = '*';
        for (int i = 0; maze[i]; i++)
            my_printf("%s", maze[i]);
        return 0;
    }
    return with_1_2(maze, data, argv, argc);
}
