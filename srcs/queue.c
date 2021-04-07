#include "../include/datastructures.h"

int     enqueue(t_queue *(*queue), void *data)
{
    t_node *new;

    new = malloc(sizeof(t_node));
    if (!new)
        return -1;
    new->data = data;
    new->next = NULL;

    if ((*queue)->tail != NULL) 
        (*queue)->tail->next = new;
    (*queue)->tail = new;
    if (!(*queue)->head)
        (*queue)->head = new;
    return 1;    
}

void    *dequeue(t_queue *(*queue))
{
    t_node  *tmp;
    void    *data;

    if (!(*queue)->head)
        return NULL;
    tmp = (*queue)->head;
    data = tmp->data;
    (*queue)->head = (*queue)->head->next;
    if (!(*queue)->head)
        (*queue)->tail = NULL;
    free(tmp);
    return data;
}

void    *peek_q(const t_queue (*queue))
{
    if (!queue->head)
        return NULL;
    return queue->head->data;
}

void    clear_queue(t_queue **queue, void (*f)(void *))
{
    t_node *tmp;
    
    if ((*queue)->head)
    {
        while ((*queue)->head)
        {
            tmp = (*queue)->head;
            (*queue)->head = (*queue)->head->next;
            f(tmp->data);
            f(tmp);
        }
        (*queue)->head = NULL;
        (*queue)->tail = NULL;
    }
}