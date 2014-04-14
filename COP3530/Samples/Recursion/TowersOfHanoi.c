/*
 * TowersOfHanoi.c
 * Jim Lewis
 * Cop 3530
 */

#include <stdio.h>

// GLOBAL counter for moves
int count = 0;

//prototypes
void printMove( int n, char fromPeg, char toPeg );
void towers( int n, char fromPeg, char toPeg, char auxPeg );

int main() 
{
	towers( 3, 'A', 'B', 'C' );
	printf("Total number of calls = %d\n\n", count );
}

void towers( int n, char fromPeg, char toPeg, char auxPeg )
{
	count++;
	if( n == 1 )
	{
		printMove( n, fromPeg, toPeg );
	}
	else
	{
		towers( n - 1, fromPeg, auxPeg, toPeg );
		printMove( n, fromPeg, toPeg );
		towers( n - 1, auxPeg, toPeg, fromPeg );
	}
}

void printMove( int n, char fromPeg, char toPeg )
{
		printf("Move disk %d", n );
		printf(" from %c", fromPeg );
		printf(" to %c.\n",toPeg );
}
    
    
