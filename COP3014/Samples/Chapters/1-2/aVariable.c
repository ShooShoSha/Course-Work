/*
 * filename :  aVariable.c
 *   author :  Jim Lewis
 *   course :  Cop 3014
 *     date :  ???
 * 
 *  purpose : 
 *     This program demonstrates the concept of a variable.
 *     A variable is a location in memory where information
 *     can be stored as the program is executing.
 */

#include <stdio.h>

/*
 * Your program always begins executing in "main".
 */
int main()
{
    // first you must DECLARE the variable
    int num;
    // this is how you ASSIGN a value to the variable
    num = 27;
    // now we display the variable on the console
    printf("The number is %d\n", num);
    // now change the value from 27 to 83 using an assignment statement
    num = 83;
    // now display the variable again showing its new value
    printf("The number is now %d\n", num);
    return 0;
}
