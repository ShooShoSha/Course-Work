#include <stdio.h>

int main(void)
{
	int ratingCounters[11], i, response;
	
	//Clear the array
	for(i = 1; i <= 10; ++i)
		ratingCounters[i] = 0;
	
	printf("Enter your responses\n");
	
	for(i = 1; i <= 20; ++i)
	{
		scanf("%i", &response);
		
		if( 1 <= response && response <= 10)
			++ratingCounters[response];
		else
			printf("Bad response: %i\n", response);
	}
	
	printf("\n\n");
	
	printf("Rating Number of Responses\n");
	printf("------ -------------------\n");
	
	for(i = 1; i <= 10; ++i)
		printf("%4i%14i\n", i, ratingCounters[i]);
	
	return 0;
}
