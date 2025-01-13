/*
** EPITECH PROJECT, 2024
** hash_function
** File description:
** hash function
*/
#include "../include/secured.h"

int hash(char *key, int len)
{
    unsigned long int_key = 0;
    int hash_value;

    for (int i = 0; i < my_strlen(key); i++) {
        int_key = int_key * 73 + key[i];
    }
    hash_value = int_key % len;
    return hash_value;
}
