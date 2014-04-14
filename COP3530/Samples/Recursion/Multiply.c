/*
 * Multiply.c
 * Jim Lewis
 * Cop 3530
 */

#include <stdio.h>

int myProduct(int x, int y);

int main()
{
        int x = 5;
        int y = 7;
        printf(" 5 x 7 = %d\n", myProduct( x, y) );

	return 0;
}

int myProduct(int x, int y)
{
        if( y == 1 ) return x;
        else return ( x + myProduct( x, y - 1 ) );
}

// OUTPUT is:  5 x 7 = 35