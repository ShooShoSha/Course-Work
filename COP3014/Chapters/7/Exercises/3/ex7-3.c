#include <stdio.h>

int main(void)
{
	int ratingCounters[11] = {}, i, response, entries;
	
	printf("How many responses to enter? ");
	scanf("%i", &entries);
	
	printf("Enter your responses, 999 to exit\n");
	
	for(i = 1; i <= entries; ++i)
	{
		scanf("%i", &response);
		
		if( 1 <= response && response <= 10)
			++ratingCounters[response];
		else if (999 == response)
			break;
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
