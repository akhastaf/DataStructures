#include "include/datastructures.h"

int     main()
{
    // t_stack *stack;
    t_hash_table *t;
    char *k,*v;
    t_key_value *kv1, *kv2, *kv3, *kv4;

    kv1 = malloc(sizeof(t_key_value));
    kv2 = malloc(sizeof(t_key_value));
    kv3 = malloc(sizeof(t_key_value));
    kv4 = malloc(sizeof(t_key_value));
    init_hashtable(&t, 10);
    
    kv1->key = strdup("Firstame");
    kv1->value = strdup("Abderrazzaq");
    insert_to_table(t, kv1, strlen(kv1->key));

    kv2->key = strdup("Age");
    kv2->value = strdup("27");
    insert_to_table(t, kv2, strlen(kv2->key));

    kv3->key = strdup("Job");
    kv3->value = strdup("Develeopper");
    insert_to_table(t, kv3, strlen(kv3->key));

    kv4->key = strdup("Lastname");
    kv4->value = strdup("Khastaf");
    insert_to_table(t, kv4, strlen(kv4->key));


    print_ht(t);


    // t_queue *q;
    // int *t;
    // q = malloc(sizeof(t_queue));
    // q->tail = NULL;
    // q->head = NULL;
    // int *a = malloc(sizeof(int));
    // int *b = malloc(sizeof(int));
    // *a = 10;
    // *b = 25;
    // *c = 45;

    // enqueue(&q, a);
    // enqueue(&q, b);
    // enqueue(&q, c);
    // t = dequeue(&q);
    // if (t)
    //     printf("%d\n", *t);
    // t = peek_q(q);
    // if (t)
    //     printf("%d\n", *t);
    // clear_queue(&q, free);
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