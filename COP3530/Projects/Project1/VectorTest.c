/*
 * P1Spr14.c
 *
 * Project 1 - DS1
 * Jim Lewis
 */

#include <stdio.h>
#include "Vector.h"

int main()
{
	// Create a new vector ... check size and capacity
	VectorT *v1 = newVector();
	int size = sizeVector(v1);
	printf("The size is (0) %i\n", size);
	int capacity = capacityVector(v1);
	printf("The capacity is (5) %i\n", capacity);
	
	// Add two items ... see if they are there
	addVector(v1, 128);
	addVector(v1, 210);
	VectorItemT item = getVector(v1, 0);
	printf("First item is (128) %i\n", item);
	printf("Second item is (210) %i\n", getVector(v1, 1));
	
	// Add four more items ... last one should fail
	addVector(v1, 73);
	addVector(v1, 5667);
	addVector(v1, 11);
	addVector(v1, 99);
	addVector(v1, 999);
	
	// Try to get from an invalid index
	printf("Tenth item is (error) %i\n", getVector(v1, 9));
	
	// What is the last item in the list? What is size?
	printf("Last item is (11) %i\n", getVector(v1, (sizeVector(v1)-1)));
	printf("The size is (5) %i\n", sizeVector(v1));
	
	// Replacing index 3 with 222? What is size?
	setVector(v1, 222, 3);
	printf("Item at index 3 is (222) %i\n", getVector(v1, 3));
	printf("The size is (5) %i\n", sizeVector(v1));
	
	// Remove two items
	printf("Removing index 3 (222) %i\n", removeVector(v1, 3));
	printf("Removing index -8 (error) %i\n", removeVector(v1, -8));
	
	// Clear and check size
	clearVector(v1);
	printf("Cleared vector ... the size is (0) %i\n", sizeVector(v1));
	
	return 0;
}



