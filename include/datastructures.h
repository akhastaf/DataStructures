#ifndef DATASTRUCTUES_H
#define DATASTRUCTUES_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;


typedef struct s_key_value
{
    void    *key;
    void    *value;
}   t_key_value;


typedef struct s_hash_table
{
    size_t         lenght;
    t_list      **backets;
}   t_hash_table;

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


void            init_hashtable(t_hash_table **ht, size_t lenght);
void            insert_to_table(t_hash_table *ht, t_key_value *kv, size_t size);
void            *get_value(t_hash_table *ht, void *key, size_t size);
t_key_value     *get_key_value(t_hash_table *ht, void *key, size_t size);
t_list          *get_keys(t_hash_table *ht);
t_list          *get_values(t_hash_table *ht);
void            clear_hashtable(t_hash_table **ht, void (*del)(void*)); 
void    print_ht(t_hash_table *ht);

void	ft_lstadd_back(t_list **alst, t_list *new);
void	ft_lstadd_front(t_list **alst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *data);
int		ft_lstsize(t_list *lst);

int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);


#endif