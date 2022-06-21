/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-dante-guillaume.lemoine
** File description:
** main
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "../../include/my.h"

int get_size(char *filepath)
{
    struct stat statbuf;

    if (stat(filepath, &statbuf) == -1)
        return 84;
    if (statbuf.st_size <= 1)
        return 0;
    return statbuf.st_size;
}

char *read_map(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char *map;
    int fs = get_size(filepath);
    int size;

    map = calloc(sizeof(char) * (fs + 1), sizeof(char) * (fs + 1));
    size = read(fd, map, fs);
    if (!map || fd == -1 || fs ==  84|| size == -1)
        return NULL;
    map[size] = '\0';
    close(fd);
    return map;
}

void process_solving(t_orient *o, int line, int col)
{
    int i = 0;
    int j = 0;

    if (o->map[0][0] == '*')
        o->map[0][0] = 'o';
    do {
        i = o->i;
        j = o->j;
        call_orientation(o);
        if (o->map[o->i][o->j] == 'o' && o->map[i][j] == 'o')
            o->map[i][j] = '*';
        else
            o->map[o->i][o->j] = 'o';
    } while ((o->i != 0 || o->j != 0) &&
        (o->i != line - 1 || o->j != col - 1));
}

int main(int argc, char **argv)
{
    int line = 0;
    int col = 0;
    int a = 0;

    t_orient orientation = {my_str_to_array(read_map(argv[1]), &line, &col),
        0, 0, 0};

    if (argc != 2)
        return 84;
    process_solving(&orientation, line, col);
    for (int i = 0; orientation.map[i] != NULL; i++) {
        if (a++)
            my_printf("\n");
        my_printf("%s", orientation.map[i]);
    }
    free(orientation.map);
    return 0;
}
