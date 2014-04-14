/*
 * Vector.h
 * Jim Lewis
 */
 
#ifndef _vector_h
#define _vector_h

#define DEFAULT_CAPACITY 5

typedef int VectorItemT;

typedef struct
{
    VectorItemT items[DEFAULT_CAPACITY];
    int size;
    int capacity;
}VectorT;

/*
 * This is the interface to the Vector ADT
 */
 
/*
 * Allocates the memory for a new Vector struct using malloc
 * Sends an error message to stderr if malloc fails and returns NULL
 * Initializes the Vector
 * Returns a pointer to new Vector
 */
VectorT *newVector();

/*
 * Returns the number of items currently in the Vector
 * Vector is unchanged
 */
int sizeVector(VectorT *v);

/*
 * Returns the capacity of the Vector
 * Vector is unchanged
 */
int capacityVector(VectorT *v);

/*
 * Adds one item to the end of the Vector
 * Prints an error message to stderr if the Vector is full
 */
void addVector(VectorT *v, VectorItemT i);

/*
 * Returns a copy of the item at the specified index
 * Vector is unchanged
 * Prints an error message to stderr if the index is invalid
 */
VectorItemT getVector(VectorT *v, int index);

/*
 * Replaces the item at the specified index with the new item
 * Size is unchanged
 * Prints an error message to stderr if the index is invalid
 */
void setVector(VectorT *v, VectorItemT i, int index);

/*
 * Removes and returns a copy of the item at the specified index
 * Prints an error message to stderr if the index is invalid
 */
VectorItemT removeVector(VectorT *v, int index);

/*
 * Deletes all items from the Vector
 */
void clearVector(VectorT *v);

#endif

