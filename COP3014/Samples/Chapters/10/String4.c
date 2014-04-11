/*
   String4.c
   Jim Lewis
   Cop 3014
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char first[20], last[20]; 
    printf("Enter your first name -- ");
    scanf("%s", first);
    //gets(first); // reads an entire line
    printf("first name is %s.\n", first);
    int len = strlen(first);
    printf("Length of first name is %i\n", len);

    printf("Enter your last name -- ");
    scanf("%s", last);
    printf("last name is %s.\n", last);
    len = strlen(last);
    printf("Length of last name is %i\n", len);
	
    printf("Comparing the two names.\n");
    printf("%i\n", strcmp(first, last));
    printf("%i\n", strcmp(last, first));
    if( strcmp(first, last) < 0 ) printf("first is less\n");
    else printf("first is not less\n");
    strcpy(first, last);
    printf("%i\n", strcmp(last, first));
	
    strcat(first, "Junk");
    printf("%s\n", first);

    return 0;
}

/* OUTPUT RUN 1
Enter your first name -- Susan Johnson
first name is Susan.
Length of first name is 5
Enter your last name -- last name is Johnson.
Length of last name is 7
Comparing the two names.
9
-9
first is not less
0
JohnsonJunk
 
 
OUTPUT RUN 2
Enter your first name -- Susan
first name is Susan.
Length of first name is 5
Enter your last name -- Johnson
last name is Johnson.
Length of last name is 7
Comparing the two names.
9
-9
first is not less
0
JohnsonJunk
*/




