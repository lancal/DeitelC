//
// Created by Alan  on 07/01/2018.
//

#include <stdio.h>

int  main(){

    int decks;

    char s [] = "shatner";

    puts("Hello World\n");

    puts ("Enter a number of decks");

    scanf("%i", &decks);

    if (decks < 1){

        puts("That is not a valid number of decks");

        return 1;

    }

    printf("There are %i cards\n", (decks * 52));

    printf( "%s",   s[7]);


    return 0;

}