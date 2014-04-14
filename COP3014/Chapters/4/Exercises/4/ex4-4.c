#include <stdio.h>

int main(void)
{
	int fahrenheit = 27;
	int celsius = (fahrenheit - 32) / 1.8;

	printf("%iF = %iC\n", fahrenheit, celsius);

	return 0;
}
