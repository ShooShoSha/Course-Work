/*
 * filename :  scanfSample.c
 *   author :  Jim Lewis
 *   course :  Cop 3014
 *     date :  ???
 * 
 *  purpose : 
 *     Look at the operation of the scanf
 *     statement in a C program.
 */

#include <stdio.h>

/*
 * Your program always begins executing in "main".
 */
int main()
{
    int num;
    printf("Please enter a number -- ");
    
    // BEWARE: Notice that the variable must be
    // preceded by the "&". This is your first
    // use of a pointer in this course. The
    // "&" indicates that we are referencing
    // the "address" of the variable num, 
    // not its value.
    scanf( "%i", &num );
    printf("The number was %i\n", num);

    return 0;
}
