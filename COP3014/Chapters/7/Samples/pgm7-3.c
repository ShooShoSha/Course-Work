#include <stdio.h>

int main(void)
{
	int Fibonacci[15], i;
	
	//Initialize the Fibonacci definitions
	Fibonacci[0] = 0;
	Fibonacci[1] = 1;
	
	for(i = 2; i < 15; ++i)
		Fibonacci[i] = Fibonacci[i-1] + Fibonacci[i-2];
	
	for(i = 0; i < 15; ++i)
		printf("%4i\n", Fibonacci[i]);
	
	return 0;
}
