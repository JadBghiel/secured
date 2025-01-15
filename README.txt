TODO:
- hash function use mid-square method or binning method instead
- review makefile to make sure its right

STEPS:
    ✓ int hash(char *key, int len);

    ✓ hashtable_t *new_hashtable(int (*hash)(char *, int), int len);
    ✓ void delete_hashtable(hashtable_t *ht);

    ✓ void ht_dump(hashtable_t *ht);
    ✕ int ht_insert(hashtable_t *ht, char *key, char *value);
    ✕ int ht_delete(hashtable_t *ht, char *key);
    ✕ char *ht_search(hashtable_t *ht, char *key);

makes sure collisions are handled