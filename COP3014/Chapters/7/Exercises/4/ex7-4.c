#include <stdio.h>

int main(void)
{
	float sum;
	float values[10] = {
		5.264, 6.211, 7.85, 2.2134, 9.011,
		4.553, 4.87, 3.9985, 4.123, 6.211 
	};
	int index;
	
	for(index = 0; index < 10; ++index)
		sum += values[i];
	
	printf("Average: %.3f\n", sum / 10);
	
	return 0;
}
