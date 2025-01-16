/*
** EPITECH PROJECT, 2024
** my_calloc
** File description:
** allocate mem for an array of nmeb elements
*/
#include "../../include/my.h"

void *my_calloc(size_t nmemb, size_t size)
{
    void *ptr;

    if (nmemb == 0 || size == 0) {
        return NULL;
    }
    ptr = malloc(nmemb * size);
    if (!ptr) {
        return NULL;
    }
    memset(ptr, 0, nmemb * size);
    return ptr;
}
