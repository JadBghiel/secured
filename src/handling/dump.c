/*
** EPITECH PROJECT, 2024
** dump
** File description:
** dump
*/
#include "../../include/secured.h"

void print_bucket(bucket_t *bucket)
{
    bucket_t *current = bucket;

    while (current) {
        my_putstr(" -> (key: ");
        my_putstr(current->key);
        my_putstr(", value: ");
        my_putstr(current->value);
        my_putstr(")");
        current = current->next;
    }
}

void ht_dump(hashtable_t *ht)
{
    if (!ht) {
        my_putstr("hash table is NULL");
        my_putchar('\n');
        return;
    }
    for (size_t i = 0; i < ht->max_slots; i++) {
        my_putstr("[");
        my_put_nbr(i);
        my_putstr("]:");
        print_bucket(ht->data[i].next);
        my_putchar('\n');
    }
}
