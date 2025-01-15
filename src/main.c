/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/
#include "../include/secured.h"

int main ( void )
{
hashtable_t * ht = new_hashtable (& hash , 5) ;
ht_insert ( ht , " Vision ", "./ Documents / Tournament / Modules / Vision ") ;
ht_insert ( ht , " Kratos ", "./ Trash / Hollidays_Pics /. secret_folder / kratos .ai") ;
ht_insert ( ht , " <3", "+33 6 31 45 61 23 71") ;
ht_dump ( ht ) ;
return 0;
}