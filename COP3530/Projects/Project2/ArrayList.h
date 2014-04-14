/*
 * ArrayList.h
 *
 *  Created on: Dec 28, 2013
 *      Author: jim
 */

#ifndef ARRAYLIST_H_
#define ARRAYLIST_H_

#define DEFAULT_CAPACITY 5
#define TRUE 1
#define FALSE 0

typedef int Boolean;
typedef int ArrayListItemT;

/*
 * Pay very close attention to this definition.
 * Notice that it does not define the struct,
 * rather it defines a pointer to a struct.
 * You must define the actual struct in your ArrayList.c file.
 * It MUST have the name "struct ArrayList" to match this typedef.
 * The definition of the struct is now "private".
 */
typedef struct ArrayList *ArrayListP;

/*
 * Returns a pointer to a new empty ArrayList
 * Memory is allocated dynamically
 * If malloc fails returns a NULL pointer
 * Uses DEFAULT_CAPACITY
 */
ArrayListP newArrayList();

/*
 * Returns the number of items currently in the ArrayList
 */
int sizeArrayList(ArrayListP);

/*
 * Returns the current capacity of the ArrayList
 */
int capacityArrayList(ArrayListP);

/*
 * Adds one item to the end of the ArrayList
 * "Grows" the ArrayList when necessary
 */
void addArrayList(ArrayListP, ArrayListItemT);

/*
 * Returns a copy of the item at the specified index
 * ArrayList is unchanged
 * Prints an error message to stderr if the index is invalid
 */
ArrayListItemT getArrayList(ArrayListP, int);

/*
 * Replaces the item at the specified index with the new item
 * Size is unchanged
 * Prints an error message to stderr if the index is invalid
 */
void setArrayList(ArrayListP, ArrayListItemT, int);

/*
 * Removes and returns a copy of the item at the specified index
 * Prints an error message to stderr if the index is invalid
 */
ArrayListItemT removeArrayList(ArrayListP, int);

/*
 * Returns True if the requested item is in the ArrayList, else False
 */
Boolean containsArrayList(ArrayListP, ArrayListItemT);

/*
 * Returns the index of the first occurrence of the item in the ArrayList
 * Returns -1 if not found
 */
int indexOfArrayList(ArrayListP, ArrayListItemT);

/*
 * Deletes all items from the ArrayList
 */
void clearArrayList(ArrayListP);

/*
 * Frees all memory allocated for the ArrayList
 */
ArrayListP freeArrayList(ArrayListP);

#endif /* ARRAYLIST_H_ */
