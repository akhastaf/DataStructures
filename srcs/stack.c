#include "../include/datastructures.h"

int     push(t_stack **stack, void *data)
{
    t_stack *new;

    new = malloc(sizeof(t_stack));
    if (!new)
        return -1;
    new->data = data;
    new->next = *stack;
    *stack = new;
    return 1;
}

void    *pop(t_stack **stack)
{
    void *data;
    t_stack *tmp;
    if (*stack == NULL)
        return NULL;
    tmp = *stack;
    data = tmp->data;
    *stack = tmp->next;
    free(tmp);
    return data;
}

void    *peek_s(const t_stack *stack)
{
    if (!stack)
        return NULL;
    return stack->data;
}

void    clear_stack(t_stack **stack, void (*f)(void *))
{
    t_stack *tmp;

    if (*stack)
    {
        while (*stack)
        {
            tmp = *stack;
            *stack = tmp->next;
            f(tmp->data);
            f(tmp);
        }
    }
}