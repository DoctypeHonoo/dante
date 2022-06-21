/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-dante-guillaume.lemoine
** File description:
** node
*/

#include <stdlib.h>
#include "../../include/my.h"

void node_push_front(t_node **node, int x, int y, int oldpath)
{
    t_node *node_cpy = malloc(sizeof(t_node));
    node_cpy->x = x;
    node_cpy->y = y;
    node_cpy->oldpath = oldpath;
    node_cpy->next = (*node);
    (*node) = node_cpy;
}

void node_pop_front(t_node **node)
{
    if ((*node))
        (*node) = (*node)->next;
}
