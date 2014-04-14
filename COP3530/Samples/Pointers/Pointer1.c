/*
    Pointer1.c
    Jim Lewis
    Cop 3014
*/
#include <stdio.h>

int main()
{
    int num = 23;
    int *ptr;
    ptr = &num;
    printf("Num = %i\n", num);
    printf("Num = %i\n", *ptr);
    
    num = 179;
    printf("Num = %i\n", num);
    printf("Num = %i\n", *ptr);

    *ptr = 255;
    printf("Num = %i\n", num);
    printf("Num = %i\n", *ptr);
	
    return 0;
}

/* OUTPUT

Num = 23
Num = 23
Num = 179
Num = 179
Num = 255
Num = 255
*/