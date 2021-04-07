#ifndef DATASTRUCTUES_H
#define DATASTRUCTUES_H

#include <stdlib.h>

typedef struct s_node
{
    void    *data;
    struct  s_node *next;
}   t_node;

typedef struct s_queue
{
    t_node *head;
    t_node *tail;
}       t_queue;

typedef struct s_stack
{
    void    *data;
    struct s_stack *next;
} t_stack;

int     push(t_stack **stack, void *data);
void    *pop(t_stack **stack);
void    *peek_s(const t_stack *stack);
void    clear_stack(t_stack **stack, void (*f)(void *));

int     enqueue(t_queue **queue, void *data);
void    *dequeue(t_queue **queue);
void    *peek_q(const t_queue *queue);
void    clear_queue(t_queue **queue, void (*f)(void *));


#endif