/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-dante-guillaume.lemoine
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_
    #define RIGHT 0
    #define LEFT 1
    #define TOP 2
    #define BOTTOM 3

typedef struct s_orientation {
    char **map;
    int i;
    int j;
    int orientation;
} t_orient;

typedef struct arr {
    int i;
    int ind;
    int tar;
    int cpy;
    char **arr;
} arr_t;

typedef struct s_node {
    int x;
    int y;
    int oldpath;
    struct s_node *next;
} t_node;

typedef struct maze_s {
    t_node *corner;
    int x;
    int y;
    int x_size;
    int y_size;
    int oldpath;
    int moovin;
} maze_t;

int my_printf(const char *format, ...);
void node_push_back(t_node **node, int x, int y);
int is_right_possible(char **maze, maze_t *data);
int with_1_1(char **maze, maze_t *data, char **argv, int argc);
void my_maze(char **maze, maze_t *data);
void remove_some_x(char **maze, maze_t *data);
int is_left_possible(char **maze, maze_t *data);
char **my_str_to_array(char const *str, int *line, int *col);
int is_up_possible(char **maze, maze_t *data);
int random_way(char **maze, maze_t *data);
void call_orientation(t_orient *o);
void is_movement_possible(char **maze, maze_t *data);
void moove_maze_2(char **maze, maze_t *data, int direction);
void moove_maze(char **maze, maze_t *data, int direction);
void node_push_front(t_node **node, int x, int y, int oldpath);
void node_pop_front(t_node **node);
int is_down_possible(char **maze, maze_t *data);
int my_strlen(char const *str);
char *my_strdup(char const *src);
char *my_strcpy(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcat(char *dest, char const *src);

#endif
