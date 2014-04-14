/*
 * dynamicMemory3.c
 * Jim Lewis
 * Cop 3530 Sample
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ARRAY_SIZE 10

int main()
{
    int *nums; // Declared as pointer - used as array of int

    nums =  (int *) malloc(MAX_ARRAY_SIZE * sizeof(int));
    if(nums == NULL) 
    {
        fprintf(stderr, "Memory allocation failed!\n");
        exit(1);
    }
    
    int i;
    for( i=0; i<MAX_ARRAY_SIZE; i++ )
        nums[i] = i+1;
    
    for( i=0; i<MAX_ARRAY_SIZE; i++ )
        printf("%d - %d\n", i, nums[i]);

    return 0;
}


