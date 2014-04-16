#include <stdio.h>

int main(void)
{
	int fibonacci, fib_1, fib_2;
	int i;
	
	//Initialize the Fibonacci definitions
	fib_1 = 0;
	fib_2 = 1;
	
	for(i = 2; i < 15; ++i)
	{
		fibonacci = fib_1 + fib_2;
		fib_2 = fib_1;
		fib_1 = fibonacci;
		
		printf("%4i\n", fibonacci);
	}
	
	return 0;
}
