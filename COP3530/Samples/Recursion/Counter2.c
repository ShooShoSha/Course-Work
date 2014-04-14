/*
 * Counter.c
 * Jim Lewis
 * Cop 3530
 */

#include <stdio.h>

void doNext(int num);

int main()
{
	doNext(3);
	printf("\n");
	return 0;
}

void doNext(int num)
{
        if( num > 1 ) doNext( num - 1 );
		printf("%d ", num);
}

