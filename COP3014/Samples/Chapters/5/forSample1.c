/*
 * Jim Lewis
 * Cop 3014 Sample For loop
 * 
 */

#include <stdio.h>

/*
 * Your program always begins executing in "main".
 */
int main()
{
    int count, sum = 0;
    for( count=1; count<=10; count++ )
    {
        sum = sum + count;
    }
    printf("Sum (1..10) = %i\n", sum);
    
    return 0;
}
