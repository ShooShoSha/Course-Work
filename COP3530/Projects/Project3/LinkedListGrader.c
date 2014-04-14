/*
 * LinkedListGrader.c
 *
 *  Created on: Feb 4, 2014
 *      Author: jim
 */

#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

// Utility function prototypes
static void displayListForward(LinkedListP);

int main()
{
    //Create two lists
    LinkedListP list1 = newList();
    LinkedListP list2 = newList();
    addItemList(list1, "Three");
    addItemList(list1, "Four");
    addItemList(list1, "Five");
    addItemList(list1, "Six");
    addItemList(list1, "Seven");
    displayListForward(list1);

    firstItemList(list1);
    nextItemList(list1);
    previousItemList(list1);
    insertItemList(list1, "Two");
    insertItemList(list1, "One");
    displayListForward(list1);
    
    setItemList(list1, "Eight");
    previousItemList(list1);
    setItemList(list1, "Seven");
    displayListForward(list1);
    
    firstItemList(list1);
    printf("Removing %s\n", removeItemList(list1));
    displayListForward(list1);
    lastItemList(list1);
    lastItemList(list1);
    printf("Removing %s\n", removeItemList(list1));
    displayListForward(list1);
    
    list1 = freeList(list1);
    if(list1 == NULL) printf("List 1 is NULL\n");
    else printf("List 1 is not NULL\n");
    addItemList(list1, "Nine");

   return 0;
}

// Utility function to display the entire list forward
static void displayListForward(LinkedListP list)
{
    int i, size = sizeList(list);
    printf("Size is: %i, ", size);
    firstItemList(list);
    for(i=0; i<size; i++)
    {
        printf(" %s ", getItemList(list));
        nextItemList(list);
    }
    printf("\n");
}



