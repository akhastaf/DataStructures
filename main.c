#include "include/datastructures.h"
#include <stdio.h>

int     main()
{
    t_stack *stack;
    t_queue *q;
    int *t;
    q = malloc(sizeof(t_queue));
    q->tail = NULL;
    q->head = NULL;
    int *a = malloc(sizeof(int));
    int *b = malloc(sizeof(int));
    int *c = malloc(sizeof(int));
    *a = 10;
    *b = 25;
    *c = 45;

    enqueue(&q, a);
    enqueue(&q, b);
    enqueue(&q, c);
    t = peek_q(q);
    if (t)
        printf("%d\n", *t);
    clear_queue(&q, free);
    t = dequeue(&q);
    if (t)
        printf("%d\n", *t);
    // push(&stack, a);
    // push(&stack, b);
    // push(&stack, c);
    // int *t = pop(&stack);
    // printf("%d\n", *t);
    //push(&stack, c);
    //clear_stack(&stack, free);
    // t = peek_s(stack);
    // if (t)
    //     printf("%d\n", *t);
    // t = pop(&stack);
    // printf("%d\n", *t);
    // t = pop(&stack);
    // printf("%d\n", *t);
    // while ((t = pop(&stack)) != NULL)
    //     printf("%d\n", *t);

    return 0;
}