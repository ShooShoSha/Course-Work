// Program to generate a table of prime numbers

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int p,d;
	bool isPrime;

	for(p = 2; p <= 50; ++p)
	{
		isPrime = true; //Assume value is prime

		for(d = 2; d < p; ++d)
			if(0 == p % d)
				isPrime = false;

		if(isPrime)
			printf("%i ", p);
	}

	printf("\n");

	return 0;
}
