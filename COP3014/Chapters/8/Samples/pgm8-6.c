/*
 * Function to find the greatest common divisor of two nonnegative integer 
 * values and to return the result
*/

#include <stdio.h>

int gcd(int u, int v)
{
	int temp;
	
	while (v)
	{
		temp = u % v;
		u = v;
		v = temp;
	}
	
	return u;
}

int main(void)
{
	int result, u, v;
	
	result = gcd(150, 35);
	printf("The GCD of 150 and 35 is %i\n", result);
	
	result = gcd(1026, 405);
	printf("The GCD of %i and %i is %i\n", 1026, 405, result);
	
	u = 83;
	v = 240;
	printf("The GCD of %i and %i is %i\n", u, v, gcd(u, v));
	
	return 0;
}
