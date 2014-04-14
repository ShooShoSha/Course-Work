/*
 * typedef.c
 * Jim Lewis
*/

#include <stdio.h>
#include <string.h>

// Simple typedef
// Number now means the same as int
typedef int Number;

// This next line defines a new data type
// The data type's name is nameT
// Any variable of type nameT will be a character array 30 bytes long
typedef char NameT [30];

int main()
{
    // These are the same as ints
    Number x, y, z;
    x = 5;
    y = 10;
    z = x + y;
    printf("Answer is %i\n", z);

    // now declare three variables as type nameT
    // Notice, first, last and whole work exactly
    // as they would if declared to be char array[30]
    NameT first, last, whole;
    strcpy(first, "Sue");
    strcpy(last, "Sanders");
    printf("Name is %s %s\n", first, last);
    strcpy(whole, last);
    strcat(whole, ", ");
    strcat(whole, first);
    printf("Name is %s\n", whole);
    return 0;
}



