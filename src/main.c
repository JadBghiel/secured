/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/
#include "../include/secured.h"

int main ( void )
{
hashtable_t * ht = new_hashtable (& hash , 20) ;
ht_insert ( ht , " Vision ", "./  Tournament / Modules / Vision ") ;
ht_insert ( ht , " Kratos ", "./ h / Hollidays_Pics /. secret_folder / kratos .ai") ;
ht_insert ( ht , " <3", "+33 6 31 45 61 23 71") ;
ht_insert ( ht , " </3", "+33 7 51 49 01 38 11") ;
ht_dump ( ht ) ;
return 0;
}