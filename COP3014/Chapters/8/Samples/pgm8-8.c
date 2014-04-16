// Function to calculate the absolute value

#include <stdio.h>

float absoluteValue(float x)
{
	return x < 0 ? -x : x;
}

// Function to compute the square root of a number

float squareRoot(float x)
{
	if(0 > x)
		return -1.0;
	
	const float epsilon = 0.00001;
	float guess = 1.0;
	
	while (absoluteValue(guess*guess - x) >= epsilon)
		guess = (x / guess + guess) / 2.0;
	return guess;
}

int main(void)
{
	float x = 2.0;
	printf("squareRoot(%.1f) = %f\n", x, squareRoot(x));
	
	x = 144.0;
	printf("squareRoot(%.1f) = %f\n", x, squareRoot(x));
	
	x = 17.5;
	printf("squareRoot(%.1f) = %f\n", x, squareRoot(x));
	
	return 0;
}
