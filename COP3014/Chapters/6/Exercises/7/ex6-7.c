#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int p,d;
	bool isPrime, isOdd;

    printf("2 "); //Prime by definition
	for(p = 3; p <= 50; p+=2)
	{
		for(d = 2, isPrime = true; d < p && isPrime; ++d)
            if(0 == p % d)
                isPrime = false;

		if(isPrime)
			printf("%i ", p);
	}

	printf("\n");
    
    return 0;
}
