/*
   ifSample1.c
   Jim Lewis
   Cop 3014 Sample
*/
#include <stdio.h>

int main()
{
    int age;
    printf("Please enter your age --> ");
    scanf("%d", &age);
    if( age >= 40 ) printf("Wow, that's old!\n");
    else  printf("You are still young.\n");
    return 0;
}