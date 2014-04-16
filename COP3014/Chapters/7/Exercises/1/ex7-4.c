#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int p, i, primes[50], primeIndex = 2;
	bool isPrime;
	
	primes[0] = 2;
	primes[1] = 3;
	
	for(p = 5; p < 50; p+= 2)
	{
		for(isPrime = true, i = 1; isPrime && p / primes[i] >= primes[i]; ++i)
			if( !(p % primes[i]) )
				isPrime = false;
		
		if(isPrime)
			primes[primeIndex++] = p;
	}
	
	for(i = 0; i < primeIndex; ++i)
		printf("%i ", primes[i]);
	
	printf("\n");
	
	return 0;
}
