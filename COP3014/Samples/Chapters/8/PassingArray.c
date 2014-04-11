/*
 *  PassingArray.c
 *  Jim Lewis
 *  cop 3014 Sample
 *  
 *  Demonstrates passing an array as a parameter
*/

#include <stdio.h>
#define SIZE 5

/*
 * prototypes -- function declarations
 */ 
int sumNumbers(int [], int); // variable names not required

/*
 * Program execution starts at the first line in main
 */
int main()
{
    int nums[SIZE] = { 23, 14, -8, 43, 11 };
    int sum = sumNumbers(nums, SIZE); // notice: no square brackets in call
    printf("Sum is %i\n", sum);
    return 0;
}

/*
 * Return sum of values in an array of integers
 * NOTICE: The name of an array IS A POINTER
 * It is dereferenced by the square brackets
 */
int sumNumbers(int values[], int count)
{
    int i, total = 0;
    for(i=0; i<count; i++) 
        total = total + values[i];
    return total;
}


