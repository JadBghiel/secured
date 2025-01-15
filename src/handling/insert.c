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
    int hash_value;
    bucket_t *new_bucket;

    if (!ht || !key || !value) {
        return -1;
    }
    hash_value = hash(key, ht->max_slots) % ht->max_slots;
    new_bucket = create_bucket(key, value);
    if (!new_bucket) {
        return -1;
    }    
    new_bucket->next = ht->data[hash_value].next;
    ht->data[hash_value].next = new_bucket;
    ht->data[hash_value].n_member++;
    ht->used_slots++;
    return 0;
}