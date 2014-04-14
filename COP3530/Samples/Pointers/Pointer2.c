/*
    Pointer2.c
    Jim Lewis
    Cop 3014
*/
#include <stdio.h>

void tripleNum(int *);
void getNum(int *);


int main()
{
    int num = 23;
    int *ptr;
    ptr = &num;
    printf("Number is %i\n", num);
	
    tripleNum(&num);
    printf("Number is %i\n", num);

    tripleNum(ptr);
    printf("Number is %i\n", num);
	
    getNum(&num);
    printf("Number is %i\n", num);
	
    getNum(ptr);
    printf("Number is %i\n", num);
	
    return 0;
}

void tripleNum(int *numptr)
{
    *numptr = *numptr * 3;
}

void getNum(int *numptr)
{
    printf("Please enter a number -- ");
    scanf("%i", numptr);
}

/* OUTPUT
Number is 23
Number is 69
Number is 207
Please enter a number -- 15
Number is 15
Please enter a number -- 20
Number is 20
*/
