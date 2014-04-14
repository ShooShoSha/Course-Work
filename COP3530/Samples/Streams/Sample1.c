/*
 * Sample1.c
 * Using files and Streams
 * Jim Lewis
 * Cop 3014
 */

#include <stdio.h>

int main()
{
    int c;
    printf("Enter some text ... Ctrl-d will stop it\n");
    while ( (c = getchar()) != EOF )
        putchar(c);
    return 0;
}
