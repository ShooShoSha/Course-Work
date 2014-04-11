/*
 * filename :  variables.c
 *   author :  Jim Lewis
 *   course :  Cop 3014
 *     date :  ???
 * 
 *  purpose : 
 *     Pracitce some arithmetic and printing.
 */

#include <stdio.h>

// Execution starts here!
int main()
{
    // declare some variables
    int num, size, count;
    char letter;
    double gpa;
    
    // assign some values
    num = 11;
    size = 4;
    count = num - 3;
    size = num + size - count;
    // now we display the variables
    printf("num = %d\n", num);
    printf("size = %i\n", size);
    printf("count = %d\n", count);

    num = 214;
    letter = 'X';
    gpa = 3.93;
    printf("Letter = %c\nGPA = %lf\n", letter, gpa);
    printf("num  = %8d\n", num);
    printf("size = %8i\n", size);
    printf("GPA  = %8.2lf\n", gpa);
	
    return 0;
}

/*
OUTPUT:
-------
num = 11
size = 7
count = 8
Letter = X
GPA = 3.930000
num  =      214
size =        7
GPA  =     3.93
*/