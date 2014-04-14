// Using nested for Loops

#include <stdio.h>
int main(void)
{
	int n, number, triangularNumber, counter, iterations;

	printf("How many numbers do you want to calculate? ");
	scanf ("%i", &iterations);	

	for(counter = 1; counter <= iterations; ++counter)
	{
		printf("What triangular number do you want? ");
		scanf("%i", &number);

		for(triangularNumber = 0, n = 1; n <= number; ++n)
			triangularNumber += n;

		printf("Triangular number %i is %i\n\n", number, triangularNumber);
	}

	return 0;
}
