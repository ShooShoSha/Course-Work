#include <stdio.h>

// Function to find the minimum value in an array
int minimum(int values[10])
{
	int minValue, i;
	
	minValue = values[0];
	
	for (i = 1; i < 10; ++i)
		if(values[i] < minValue)
			minValue = values[i];
	return minValue;
}

int main(void)
{
	int scores[10], i;
	
	printf("Enter 10 scores\n");
	
	for(i = 0; 10 > i; ++i)
		scanf("%i", &scores[i]);
		
	printf("Minimum score is %i\n", minimum(scores));
	
	return 0;
}
