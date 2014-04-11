/*
 *  BubbleSort.c
 *  
 *  Class sample for cop 3014
 *  
 *  This program asks the user to enter 10 numbers,
 *  sorts the numbers and prints them.
 *
 */
#include <stdio.h>

#define SIZE 10

int main()
{
    int nums[SIZE], i, j, temp;
    /*
     * fill the array with ints
     */
    for(i=0; i<SIZE; i++)
    {
        printf("Enter a number --> \n");
        scanf("%d", &nums[i]);
    }

    /*
     * print unsorted
     */
    printf("Numbers unsorted :\n");
    for( i=0; i<SIZE; i++ )
    {
        printf("%6d", nums[i]);
        printf("\n");
    }

    /*
     * sort ascending
     */
    for(j=0; j<SIZE-1; j++)
        for(i=0; i<SIZE-1; i++)
        {
            if(nums[i] > nums[i+1])
            {
                temp = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = temp;
            }
        }

    /*
     * print sorted
     */
    printf("Numbers sorted :\n");
    for(i=0; i<SIZE; i++)
    {
        printf("%6d", nums[i]);
        printf("\n");
    }

    return 0;
}





