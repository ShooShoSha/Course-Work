/*
 * Search.c
 * Jim Lewis
 * Cop 3530
 */

#include <stdio.h>

void search(int nums[], int target, int size);
int find(int nums[], int target, int size, int index);

int main()
{
        int nums[] = { 12, 15, 7, 11, 6 };
        int size = 5;
	search( nums, 11, size );
	search( nums, 12, size );
	search( nums, 10, size );
	return 0;
}

void search(int nums[], int target, int size)
{
	int index = find(nums, target, size, 0);
	if( index >= 0 )
		printf("Found it at index %d\n", index);
	else
		printf("Not found\n");
}

int find(int nums[], int target, int size, int index)
{
	if( index >= size ) return -1;
	if( nums[index] == target ) return index;
	return find(nums, target, size, index+1);
}

/* OUTPUT is: 
Found it at index 3
Found it at index 0
Not found
*/
