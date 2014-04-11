/*
   String1.c
   Jim Lewis
   Cop 3014
*/
#include <stdio.h>

int main()
{
    char name[8]; 
    name[0] = 'J';
    name[1] = 'o';
    name[2] = 'e';
    name[3] = '\0';
    printf("name is %s.\n", name);
	
    name[4] = 'n';
    name[5] = 'y';
    name[6] = '\0';
    printf("name is %s.\n", name);
	
    name[2] = 'h';
    name[3] = 'n';
    printf("name is %s.\n", name);
    return 0;
}

/* OUTPUT
name is Joe.
name is Joe.
name is Johnny.
*/