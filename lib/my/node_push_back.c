/*
** EPITECH PROJECT, 2022
** B-CPE-200-MPL-2-1-dante-guillaume.lemoine
** File description:
** node_push_back
*/

#include <stdlib.h>
#include "../../include/my.h"

void node_push_back(t_node **node, int x, int y)
{
    t_node *next_node = malloc(sizeof(t_node));
    t_node *prev_node = malloc(sizeof(t_node));

    next_node->x = x;
    next_node->y = y;
    next_node->next = NULL;
    if (*node == NULL) {
        *node = next_node;
        return;
    }
    prev_node = *node;
    while (prev_node->next != NULL)
        prev_node = prev_node->next;
    prev_node->next = next_node;
}
