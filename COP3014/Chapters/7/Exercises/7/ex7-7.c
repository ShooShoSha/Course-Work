// Program to generate prime numbers using the Sieve of Erastosthenes

#include <stdio.h>

int main(void)
{
	int i, j;
	const int n = 150;
	int sieve[150] = {};
	
	
	for(i = 2; i < n; ++i)	
	{
		for(j = i; j * i <= n; ++j)
			sieve[i * j] = 1;
		if(!sieve[i])
			printf("%i ", i);
	}
	printf("\n");
	
	return 0;
}
