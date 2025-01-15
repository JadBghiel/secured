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

    for (int i = 0; i < my_strlen(key); i++) {
        int_key = int_key * 73 + key[i];
    }
    return int_key;
}
