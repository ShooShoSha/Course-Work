/*
   BooleanVariable.c
   Jim Lewis
   Cop 3014 Sample
*/
#include <stdio.h>

int main()
{
    int done = 0;  // zero is considered false
    char reply, trash;
    while( !done ) 
    {
        printf("Do you want to stop the loop? (y or n) ");
        scanf("%c", &reply);
        scanf("%c", &trash);
        if( reply == 'y' ) done = 1;  // one is considered true
    }
    printf("You said to stop, goodbye!");
    return 0;
}