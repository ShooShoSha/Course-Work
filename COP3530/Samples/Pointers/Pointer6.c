/*
    Pointer6.c
    Jim Lewis
    Cop 3014
*/
#include <stdio.h>

void displayNames(char **names);

int main()
{
    //This is an array of 4 pointers to arrays of characters
    char *namesPointers[4] = { "Al", "Sue", "Johnny", "Sally" };
    displayNames(namesPointers);
    return 0;
}

void displayNames(char **names)
{
    int i;
    for(i=0; i<4; i++)
        printf("Name[%d] = %s\n", i, names[i]);
}



/* OUTPUT
Name[0] = Al
Name[1] = Sue
Name[2] = Johnny
Name[3] = Sally
*/
