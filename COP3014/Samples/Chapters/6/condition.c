/*
    condition.c
    Jim Lewis
    Cop 3014 Sample
*/
#include <stdio.h>

int main()
{
    int num, size = 2;
    // the condition operator works much like an if/else
    // the logic of the following condition operator is
    // if( size > 5 ) num = 3;
    // else num = 33;
    // the syntax of the condition operator is:
    // condition ?  firstValue : secondValue;
    num = (size > 5) ? 3 : 33;
    printf("size = %i, num = %i\n", size, num);
    size = 10;
    num = size > 5 ? 3 : 33;
    printf("size = %i, num = %i\n", size, num);
    return 0;
}