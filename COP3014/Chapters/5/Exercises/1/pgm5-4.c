// Asking the User for Input

#include <stdio.h>

int main(void)
{
	int n, number, triangularNumber;

	printf("What triangular number do you want? ");
	scanf("%i", &number);

	for(triangularNumber = 0, n = 1; n <= number; ++n)
		triangularNumber += n;
	
	printf("Triangular number %i is %i\n", number, triangularNumber);

	return 0;
}
