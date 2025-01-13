/*
** EPITECH PROJECT, 2024
** hash_function
** File description:
** hash function
*/
#include "../include/secured.h"

hashtable_t *allocate_and_initialize_hashtable(int len)
{
    hashtable_t *ht = (hashtable_t *)malloc(sizeof(hashtable_t));

    if (!ht)
        return NULL;
    ht->data = (bucket_t *)malloc(len * sizeof(bucket_t));
    if (!ht->data) {
        free(ht);
        return NULL;
    }
    for (int i = 0; i < len; i++) {
        ht->data[i].head = NULL;
        ht->data[i].n_member = 0;
        ht->data[i].next = NULL;
    }
    return ht;
}

hashtable_t *new_hashtable(int (*hash)(char *, int), int len)
{
    hashtable_t *ht;

    if (len > MAX_BUCKET_COUNT) {
        len = MAX_BUCKET_COUNT;
    }
    ht = allocate_and_initialize_hashtable(len);
    if (!ht)
        return NULL;
    ht->used_slots = 0;
    ht->max_slots = len;
    ht->hash_func = hash;
    return ht;
}

void delete_hashtable(hashtable_t *ht)
{
    bucket_t *current;
    bucket_t *next;

    if (!ht) {
        return;
    }
    for (size_t i = 0; i < ht->max_slots; i++) {
        current = ht->data[i].next;
        while (current) {
            next = current->next;
            free(current);
            current = next;
        }
    }
    free(ht->data);
    free(ht);
}
