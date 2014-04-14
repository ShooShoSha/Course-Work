/*
 * dynamicMemory2.c
 * Jim Lewis
 * Cop 3530 Sample
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LEN 40

int main()
{
    char *cp;
    // notice type cast
    // malloc returns type "void pointer"
    cp =  (char *) malloc( MAX_STR_LEN );
    if(cp == NULL) 
        fprintf(stderr, "Memory allocation failed!\n");
    else
    {
        strcpy(cp, "Hello world");
        printf("String = %s\n", cp);
        printf("String length = %i\n", strlen(cp));
    }
    return 0;
}


