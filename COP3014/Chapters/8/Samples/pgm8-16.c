#include <stdio.h>

int main(void)
{
	unsigned int j;
	unsigned long int factorial(unsigned int n);
	
	for(j = 0; j < 11; ++j)
		printf("%2u! = %8lu\n", j, factorial(j));

	return 0;
}

// Recursive function to calculate the factorial of a positve integer
unsigned long int factorial(unsigned int n)
{
	if(0 == n)
		return 1;
	else
		return n * factorial(n - 1);
}
