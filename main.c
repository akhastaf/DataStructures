#include "include/datastructures.h"

int     main()
{
    // t_stack *stack;
    t_hash_table *t;
    char *k,*v;
    void *kv1, *kv2, *kv3, *kv4, *kv5;
    t_key_value    *s;

    kv1 = malloc(sizeof(t_key_value));
    kv2 = malloc(sizeof(t_key_value));
    kv3 = malloc(sizeof(t_key_value));
    kv4 = malloc(sizeof(t_key_value));
    kv5 = malloc(sizeof(t_key_value));
    init_hashtable(&t, 4);
    
    insert_to_table(t, strdup("Firstame"), strdup("Abderrazzaq"), 8);

    insert_to_table(t, strdup("Age"), "27", 3);

    insert_to_table(t, strdup("Job"), strdup("Develeopper"), 3);

    insert_to_table(t, strdup("Lastname"), strdup("Khastaf"), 8);

    insert_to_table(t, strdup("email"), strdup("akhastaf@student.1337.ma"), 5);

    print_ht(t);
    printf("---------------------------------\n");
    t_list *l, *l1;
    l = get_keys(t);
    ft_lstprint(l);
    printf("---------------------------------\n");
    l1 = get_values(t);
    ft_lstprint(l1);
    printf("---------------------------------\n");
    s = get_key_value(t, "email", 5);
    printf("%s\n", s->value);

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