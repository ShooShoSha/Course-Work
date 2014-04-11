/*
 * whileSample.c
 * Jim Lewis
 * Cop 3014 Sample
 * 
 */

#include <stdio.h>

int main()
{
    int count = 0, num, total = 0;
    
    printf("Please enter some integers (negative to stop) -- ");
    scanf("%i", &num);
    while(num >= 0)
    {
        total = total + num;
        count = count + 1;
        scanf("%i", &num);
    }
    printf("Entered %i numbers.\n", count);
    printf("Total was %i.\n", total);
    printf("Average was %i.\n", total/count);
	
    return 0;
}
