/*
 * dynamicMemory1.c
 * Jim Lewis
 * Cop 3530 Sample
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ip;
    ip = malloc(sizeof(int));
    if(ip == NULL) 
        fprintf(stderr, "Memory allocation failed!\n");
    else
    {
        printf("How old are you? ");
        scanf("%d", ip);
        printf("Are you are really %d years old?\n", *ip);
    }
    return 0;
}


