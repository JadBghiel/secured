/*
** EPITECH PROJECT, 2024
** dump
** File description:
** dump
*/
#include "../../include/secured.h"

void print_bucket_empty(size_t index)
{
    my_putstr("[");
    my_put_nbr(index);
    my_putstr("]:");
    my_putchar('\n');
}

void print_bucket(bucket_t *bucket, size_t index)
{
    bucket_t *current = bucket;

    my_putstr("[");
    my_put_nbr(index);
    my_putstr("]:");
    while (current) {
        my_putchar('\n');
        my_putchar('>');
        my_putchar(' ');
        my_put_nbr(current->key);
        my_putstr(" - ");
        my_putstr(current->value);
        current = current->next;
    }
    my_putchar('\n');
}

void ht_dump(hashtable_t *ht)
{
    if (!ht) {
        my_putstr("hash table is NULL\n");
        return;
    }
    for (size_t i = 0; i < ht->max_slots; i++) {
        if (ht->data[i] != NULL) {
            print_bucket(ht->data[i], i);
        } else {
            print_bucket_empty(i);
        }
    }
}
