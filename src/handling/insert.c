/*
** EPITECH PROJECT, 2024
** insert
** File description:
** insert
*/
#include "../../include/secured.h"

bucket_t *create_bucket(char *key, char *value)
{
    bucket_t *new_bucket = (bucket_t *)malloc(sizeof(bucket_t));

    if (!new_bucket) {
        return NULL;
    }
    new_bucket->key = my_atol(key);
    new_bucket->value = my_strdup(value);
    new_bucket->next = NULL;
    return new_bucket;
}

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    long full_hash;
    int index;
    bucket_t *new_bucket;

    if (!ht || !key || !value) {
        return -1;
    }
    full_hash = hash(key, ht->max_slots);
    index = full_hash % ht->max_slots;
    new_bucket = malloc(sizeof(bucket_t));
    if (!new_bucket) {
        return -1;
    }
    new_bucket->key = full_hash;
    new_bucket->value = my_strdup(value);
    new_bucket->next = ht->data[index];
    ht->data[index] = new_bucket;
    ht->used_slots++;
    return 0;
}
