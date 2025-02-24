/*
** EPITECH PROJECT, 2024
** search
** File description:
** search
*/
#include "../../include/secured.h"

char *ht_search(hashtable_t *ht, char *key)
{
    long full_hash;
    int index;
    bucket_t *current;

    if (!ht || !key) {
        my_put_error("error: invalid hashtable or key\n");
        return NULL;
    }
    full_hash = hash(key, ht->max_slots);
    index = full_hash % ht->max_slots;
    current = ht->data[index];
    while (current != NULL) {
        if (current->key == full_hash) {
            return current->value;
        }
        current = current->next;
    }
    my_put_error("error: key not found\n");
    return NULL;
}
