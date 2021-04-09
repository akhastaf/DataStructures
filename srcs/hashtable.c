#include "../include/datastructures.h"

void    init_hashtable(t_hash_table **ht, size_t lenght)
{
    size_t i;

    *ht = malloc(sizeof(t_hash_table));
    (*ht)->lenght = lenght;
    (*ht)->backets = malloc(sizeof(t_list *) * lenght);
    i = 0;
    while (i < lenght)
    {
        (*ht)->backets[i] = NULL;
        i++;
    }
}


unsigned int    hash_code(const void *key, size_t   size, int lenght)
{
    unsigned int code;
    unsigned char *k;
    size_t i;

    i = 0;
    code = 0;
    k = (unsigned char *)key;
    while (i < size)
    {
        code += (k[i] * k[i]) + 12;
        i++;
    }
    return (code % lenght);
}

void    insert_to_table(t_hash_table *ht, t_key_value *kv, size_t size)
{
    unsigned int id;
    t_list *new;

    new = ft_lstnew(kv);
    id = hash_code(kv->key, size, ht->lenght);
    if (!ht->backets[id])
        ht->backets[id] = new;
    else
        ft_lstadd_back(&(ht->backets[id]), new);
}

void     *get_value(t_hash_table *ht, void *key, size_t size)
{
    unsigned int id;
    t_list *tmp;

    id = hash_code(key, size, ht->lenght);
    tmp = ht->backets[id];
    while (tmp)
    {
        if (!ft_memcmp(key, ((t_key_value *)tmp->data)->key, size))
            return ((t_key_value *)tmp->data)->value;
        tmp = tmp->next;
    }
    return NULL;
}

t_key_value     *get_key_value(t_hash_table *ht, void *key, size_t size)
{
    unsigned int id;
    t_list *tmp;

    id = hash_code(key, size, ht->lenght);
    tmp = ht->backets[id];
    while (tmp)
    {
        if (!ft_memcmp(key, ((t_key_value *)tmp->data)->key, size))
            return ((t_key_value *)tmp->data);
        tmp = tmp->next;
    }
    return NULL;
}

t_list          *get_keys(t_hash_table *ht)
{
    t_list  *new;
    t_list  *tmp;
    size_t  i;

    new = NULL;
    tmp = NULL;
    i = 0;
    while (i < ht->lenght)
    {
        if (ht->backets[i]->data)
        {
            tmp = ft_lstnew(((t_key_value*)ht->backets[i]->data)->key);
            ft_lstadd_back(&new, tmp);
        }
        i++;
    }
    return new;
}

t_list          *get_values(t_hash_table *ht)
{
    t_list  *new;
    t_list  *tmp;
    size_t  i;

    new = NULL;
    tmp = NULL;
    i = 0;
    while (i < ht->lenght)
    {
        if (ht->backets[i]->data)
        {
            tmp = ft_lstnew(((t_key_value*)ht->backets[i]->data)->value);
            ft_lstadd_back(&new, tmp);
        }
        i++;
    }
    return new;
}

void    print_ht(t_hash_table *ht)
{
    size_t i;
    t_list *tmp;

    i = 0;
    while (i < ht->lenght)
    {
        if (ht->backets[i])
        {
            tmp = ht->backets[i];
            while (tmp)
            {
                printf("key : %s\tvalue : %s\n", (char*)((t_key_value*)tmp->data)->key, (char*)((t_key_value*)tmp->data)->value);
                tmp = tmp->next;
            }
        }
        i++;
    }
}