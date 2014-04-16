// Program to generate a table of prime numbers

#include <stdio.h>

int main(void)
{
	int p,d;
	_Bool isPrime;

	for(p = 2; p <= 50; ++p)
	{
		isPrime = 1; //Assume value is prime

		for(d = 2; d < p; ++d)
			if(0 == p % d)
				isPrime = 0;

		if(0 != isPrime)
			printf("%i ", p);
	}

	printf("\n");

	return 0;
}
