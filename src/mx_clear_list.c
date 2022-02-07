#include "../inc/libmx.h"

void mx_clear_list(t_list **list)
{
    t_list *node = *list;
    t_list *next = NULL;

    while (node != NULL)
    {
        next = node->next;
        free(node);
        node = next;
    }
    
    *list = NULL;
}
