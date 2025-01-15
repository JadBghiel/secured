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
    if (!ht || !key || !value) {
        return -1;
    }
    
    long hash_value = hash(key, ht->max_slots);
    
    bucket_t *new_bucket = malloc(sizeof(bucket_t));
    if (!new_bucket) {
        return -1;
    }
    
    new_bucket->key = hash_value;
    new_bucket->value = my_strdup(value);
    new_bucket->next = NULL;
    
    new_bucket->next = ht->data[hash_value].next;
    ht->data[hash_value].next = new_bucket;
    ht->data[hash_value].n_member++;
    ht->used_slots++;
    return 0;
}
