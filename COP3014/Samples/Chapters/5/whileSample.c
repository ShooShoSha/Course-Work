/*
 * whileSample.c
 * Jim Lewis
 * Cop 3014 Sample
 * 
 */

#include <stdio.h>

/*
 * Your program always begins executing in "main".
 */
int main()
{
    int count = 0;
    while( count < 3 )
    {
        printf("Hello\n");
        count = count + 1;
    }
    
    return 0;
}
