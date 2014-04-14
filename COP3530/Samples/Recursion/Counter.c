/*
 * Counter.c
 * Jim Lewis
 * Cop 3530
 */

#include <stdio.h>

void doNext(int num);

int main()
{
	doNext(1);
	return 0;
}

void doNext(int num)
{
        if( num <= 3 )
        {
            printf("%d ", num);
            doNext(num + 1);
        }
        else
            printf("\n");
}

// OUTPUT is:  1 2 3