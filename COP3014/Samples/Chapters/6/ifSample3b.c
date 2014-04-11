/*
    ifSample3b.c
    Jim Lewis
    Cop 3014 Sample
*/
#include <stdio.h>

int main()
{
    int age;
    printf("Please enter your age --> ");
    scanf("%d", &age);
    if( age >= 65 ) printf("Retired yet?\n");
    else if( age >= 40 ) printf("In your prime.\n");
    else printf("Just getting started.\n");
    return 0;
}