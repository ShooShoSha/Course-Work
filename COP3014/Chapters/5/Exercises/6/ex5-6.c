// Program to generate a table of triangular numbers

#include <stdio.h>

int main(void)
{
	int n, triangularNumber;

	printf("Table of Triangular Numbers\n\n");
	printf(" n  Sum from 1 to n\n");
	printf("--- ---------------\n");

	for(triangularNumber = 0, n = 1; n <= 10; ++n)
	{
		triangularNumber += n;
		printf("%-3i %15i\n", n, triangularNumber);
	}

	return 0;
}
