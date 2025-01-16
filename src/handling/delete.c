/*
** EPITECH PROJECT, 2024
** delete
** File description:
** delete
*/
#include "../../include/secured.h"

static void update_counts(hashtable_t *ht, int index)
{
    ht->data[index]->n_member--;
    if (ht->data[index]->n_member == 0) {
        ht->used_slots--;
    }
}

static void delete_bucket(bucket_t *current, bucket_t *prev, hashtable_t *ht,
    int index)
{
    if (prev == NULL) {
        ht->data[index]->next = current->next;
    } else {
        prev->next = current->next;
    }
    free(current->value);
    free(current);
    update_counts(ht, index);
}

int ht_delete(hashtable_t *ht, char *key)
{
    long full_hash;
    int index;
    bucket_t *current;
    bucket_t *prev;

    if (!ht || !key)
        return -1;
    full_hash = hash(key, ht->max_slots);
    index = full_hash % ht->max_slots;
    current = ht->data[index]->next;
    prev = NULL;
    while (current != NULL) {
        if (current->key == full_hash) {
            delete_bucket(current, prev, ht, index);
            return 0;
        }
        prev = current;
        current = current->next;
    }
    return -1;
}
