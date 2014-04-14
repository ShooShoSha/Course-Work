/*
 * Factorial.c
 * Jim Lewis
 * Cop 3530
 */

#include <stdio.h>

int doFact(int num);

int main()
{
	int factorial = 5;
	int answer = doFact( factorial );
	printf( "%d factorial = %d\n", factorial, answer );
	return 0;
}

int doFact(int num)
{
	if( num == 0 ) return 1;
	else return num * ( doFact( num - 1 ) );
}

