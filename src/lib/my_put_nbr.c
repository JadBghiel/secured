/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:
** Gets ingr and outp with a recurs function
** Final stumper rush3
*/
#include "../../include/my.h"

void do_intextraction(int extraction)
{
    int dig = 0;

    if (extraction >= 10) {
        do_intextraction(extraction / 10);
        extraction = (extraction % 10);
    }
        dig = (extraction +48);
        my_putchar(dig);
}

int my_put_nbr(int nb)
{
    if (nb < 0) {
        nb = (nb * -1);
        my_putchar(45);
    }
    do_intextraction(nb);
    return 0;
}
