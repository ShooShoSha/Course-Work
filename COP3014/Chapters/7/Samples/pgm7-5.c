// Program showing the different methods of initializing arrays

#include <stdio.h>

int main(void)
{
	int i, x = 1233;
	
	/* Arrays */
	//Initilize no elements
	int garbage_array[10];
	//Initialize all elements
	int count_array[10] = {1,2,3,4,5,6,7,8,9,10};
	//Initialize first few elements
	int squares_array[10] = {0, 1, 4, 9, 16};
	//Initializes all elements to 0
	int zeros_array[10] = {};
	//Perform out-of-order expression evaluation
	int expression_array[] = {[9] = x + 1,
				    [2] = 3, 
	/*Result?*/		    [0] = expression_array[2] * 2,
				    [1] = x};
	
	for(i = 5; i < 10; ++i)
		squares_array[i] = i * i;
	
	for(i = 0; i < 10; ++i)
	{
		printf("count_array[%2i]      = %12i\n", i, count_array[i]);
		printf("squares_array[%2i]    = %12i\n", i, squares_array[i]);
		printf("zeros_array[%2i]      = %12i\n", i, zeros_array[i]);
		printf("expression_array[%2i] = %12i\n", i, expression_array[i]);
		printf("garbage_array[%2i]    = %12i\n", i, garbage_array[i]);
		printf("\n");
	}
	
	return 0;
}
