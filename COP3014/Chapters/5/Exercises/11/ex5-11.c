#include <stdio.h>

int main()
{
	int number, digit_sum = 0;

	printf("Enter a number: ");
	scanf("%i", &number);

	while(number != 0)
	{
		digit_sum += number % 10;
		number /= 10;
	}

	printf("Sum of its digits is %i\n", digit_sum);

	return 0;
}
