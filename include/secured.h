/*
** EPITECH PROJECT, 2024
** secured
** File description:
** header file for secured project
*/
#ifndef SECURED
    #define SECURED
    #include "my.h"
    #include "common_lib.h"
    #define INITIAL_HASHTABLE_SIZE 4096
    #define MAX_BUCKET_COUNT 256

typedef struct bucket bucket_t;

typedef struct bucket {
    bucket_t *head;
    size_t n_member;
    bucket_t *next;
} bucket_t;

typedef struct {
    bucket_t *data;
    size_t used_slots;
    size_t max_slots;
    int (*hash_func)(char *, int);
} hashtable_t;

//function.c:
int hash(char *key, int len);

//table.c:
hashtable_t *new_hashtable(int (*hash)(char *, int), int len);
void delete_hashtable(hashtable_t *ht);

//handling.c:
int ht_insert(hashtable_t *ht, char *key, char *value);
int ht_delete(hashtable_t *ht, char *key);
char *ht_search(hashtable_t *ht, char *key);
void ht_dump(hashtable_t *ht);



#endif /* SECURED */
