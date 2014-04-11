/*
 * dowhileSample.c
 * Jim Lewis
 * Cop 3014 Sample
 * 
 */

#include <stdio.h>

int main()
{
    int num, count = 0;
    do
    {
        printf("Enter a number between 100 and 200\n");
        scanf("%i", &num);
        count++;
    } while( num < 100 || num > 200 );
    printf("It took %i try(s) to get it right!\n", count);
	
    return 0;
}
