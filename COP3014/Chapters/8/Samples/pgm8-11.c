#include <stdio.h>

void multiplyBy2 (float array[], int n)
{
	int i;
	for(i = 0; i < n; ++i)
		array[i] *= 2;
}

int main(void)
{
	float values[] = {1.2f, -3.7f, 6.2f, 8.55f};
	int i;
	
	multiplyBy2(values, 4);
	
	for(i = 0; i < 4; ++i)
		printf("%.2f ", values[i]);
	
	printf("\n");
	
	return 0;
}
