TODO:
- modify the ht_dump to check if there is smt in the table is yes print [0]
    then linebreak then > {hashvalue} - {value}
    if no then just print [0]
    do that recursively to print every slot of the array

- idk why with the main from pdf from insert the hash value between '>' and '-' is always 0 ?

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
