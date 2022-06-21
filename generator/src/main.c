/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-dante-guillaume.lemoine
** File description:
** main
*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "../../include/my.h"

void my_maze(char **maze, maze_t *data)
{
    data->corner = NULL;
    data->x = 0;
    data->y = 0;
    data->oldpath = 5;
    maze[0][0] = '*';
    if (data->x_size % 2 == 0 && data->y_size % 2 == 0) {
        maze[data->x_size - 1][data->y_size - 1] = '*';
        maze[data->x_size - 1][data->y_size - 2] = '*';
    } else if (data->x_size % 2 == 0 || data->y_size % 2 == 0)
        maze[data->x_size - 1][data->y_size - 1] = '*';
    do {
        moove_maze(maze, data, random_way(maze, data));
    } while (data->corner);
}

void remove_some_x(char **maze, maze_t *data)
{
    int random;
    int random2;

    for (int i = 0; i < ((data->x_size * data->y_size) < 10 ? 1
    : (data->x_size * data->y_size) / 10); i++) {
        do {
            random = rand() % data->x_size;
            random2 = rand() % data->y_size;
        } while (maze[random][random2] == '*');
        maze[random][random2] = '*';
    }
}

int main(int argc, char **argv)
{
    maze_t data = {0};
    char **maze = NULL;

    srand(time(NULL));
    if (argc != 3 && argc != 4)
        return 84;
    if (atoi(argv[1]) < 1 || atoi(argv[2]) < 1)
        return 84;
    maze = malloc(sizeof(char *) * (atoi(argv[1]) + 1));
    for (int i = 0; i < atoi(argv[1]); i++) {
        maze[i] = malloc(sizeof(char) * (atoi(argv[2]) + 1));
        for (int j = 0; j < atoi(argv[2]); j++)
            maze[i][j] = 'X';
        maze[i][atoi(argv[2])] = '\0';
    }
    maze[atoi(argv[1])] = NULL;
    data.x_size = atoi(argv[1]);
    data.y_size = atoi(argv[2]);
    return with_1_1(maze, &data, argv, argc);
}
