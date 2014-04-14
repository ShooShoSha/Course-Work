/*
 * LinkedList.c
 *
 * Cop 3530
 * Project 3
 *
 * Author: jlewis
 */

#ifndef LinkedList_h_
#define LinkedList_h_

#define TRUE 1
#define FALSE 0

typedef int Boolean;

/*
 * Defines a single list item to be a char pointer.
 */
typedef char *ListItemP;

/*
 * Defines LinkedListP to be a POINTER to a struct.
 */
typedef struct LinkedList *LinkedListP;

/*
 * Returns a pointer to a new empty linked list
 * Memory is allocated dynamically
 * Fails with message if malloc fails
 * Returns NULL pointer on failure
 */
LinkedListP newList();

/*
 * Dynamically creates a new node
 * Inserts the item into the new node
 * Adds the node to the list after the current item
 * Current moves to the newly inserted node
 * Fails quietly on a NULL list pointer
 * Fails with message if malloc fails
 */
void addItemList(LinkedListP, ListItemP);

/*
 * Dynamically creates a new node
 * Inserts the item into the new node
 * Inserts the node into the list before the current item
 * Current moves to the newly inserted node
 * Fails quietly on a NULL list pointer
 * Fails with message if malloc fails
 */
void insertItemList(LinkedListP, ListItemP);

/*
 * Returns the current item
 * Removes the current node from the list
 * The node immediately after the removed node becomes current
 * If the last node in the list is removed, the previous node becomes current
 * Fails quietly on NULL list pointer or empty list
 * Frees the deleted node
 */
ListItemP removeItemList(LinkedListP);

/*
 * Returns a pointer to the current item in the list
 * Fails quietly on a NULL list pointer
 */
ListItemP getItemList(LinkedListP);

/*
 * Sets the info in the current item
 * Fails quietly on a NULL list pointer
 */
void setItemList(LinkedListP, ListItemP);

/*
 * The first node in the list becomes the current node
 * Fails quietly on NULL list pointer or empty list
 */
void firstItemList(LinkedListP);

/*
 * The last node in the list becomes the current node
 * Fails quietly on NULL list pointer or empty list
 */
void lastItemList(LinkedListP);

/*
* The next node in the list becomes the current node
* Fails quietly if:
*      - list pointer is NULL
*      - current is already at last node
*/
void nextItemList(LinkedListP);

/*
* The previous node in the list becomes the current node
* Fails quietly if:
*      - list pointer is NULL
*      - current is already at first node
*/
void previousItemList(LinkedListP);

/*
 * Returns true is the list is empty else false.
 */
Boolean isEmptyList(LinkedListP);

/*
 * Returns the number of nodes in the list.
 * Returns -1 if list pointer is NULL
 */
int sizeList(LinkedListP);

/*
 * Frees all the nodes in the list
 * Frees the memory used by the List struct
 * Returns NULL
 */
LinkedListP freeList(LinkedListP);

#endif /* LinkedList_h_ */
