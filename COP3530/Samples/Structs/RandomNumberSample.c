/*
 * RandomNumberSample.c
 * Jim Lewis
*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 500

int main()
{
    int num, i;
    
    // This line "seeds" the random number generator.
    // It only needs to be seeded once before you 
    // start generating random numbers.
    srand( (int) time(NULL));
    
    // The random number generator will give a number 
    // between zero and  2147483647
    
    
    // Now we generate 10 random numbers
    
    for(i=0; i<10; i++)
    {
        // This operation generates a number between 1 and MAX
        num = rand() % MAX + 1;
        printf("Random Number = %i\n", num);
    }
    return 0;
}



