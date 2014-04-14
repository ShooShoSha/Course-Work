/*
 * CommandLineSample.c
 * Jim Lewis
 *
 * Correct usage is to enter an option followed
 * by a filename.
 *
 * Example:
 *      ./a.out  -f  myFile.c
 *
 * Option must be letter 'f' or 's'
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(int argc, char **argv)
{
    int i;
    if(argc != 3)
    {
        fprintf(stderr, "Invalid number of arguments.\n");
        printf("Useage: ./a.out  -option   filename\n");
        exit(1);
    }
    
    if( argv[1][1] != 'f' && argv[1][1] != 's' )
    {
        fprintf(stderr, "Invalid Option ... must be '-f' or '-s'\n");
        exit(1);
    }
    
    printf("\nAll is good:\n");
    printf("Executable file : %s\n", argv[0]);
    printf("Option selected : %s\n", argv[1]);
    printf("Filename        : %s\n\n", argv[2]);
    
    return 0;
}


