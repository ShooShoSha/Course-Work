/*
   String3.c
   Jim Lewis
   Cop 3014
*/
#include <stdio.h>

int getLength(char []);

int main()
{
    char name[8] = "Julie"; 
    printf("name is %s.\n", name);
    int len = getLength(name);
    printf("Length of string is %i\n", len);

    name[3] = '\0';
    printf("name is %s.\n", name);
    len = getLength( name );
    printf("Length of string is %i\n", getLength(name));
    return 0;
}

int getLength(char str[] )
{
    int count = 0;
    while( str[count] != '\0' ) count++;
    return count;
}

/* OUTPUT
name is Julie.
Length of string is 5
name is Jul.
Length of string is 3
*/