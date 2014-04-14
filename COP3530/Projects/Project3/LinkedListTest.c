/*
 * LinkedListTest.c
 *
 *  Created on: Dec 28, 2013
 *      Author: jim
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"

// Utility function prototypes
static void displayListForward(LinkedListP);
static void displayListBackward(LinkedListP);

int main()
{
    //Create two lists
    LinkedListP list1 = newList();
    LinkedListP list2 = newList();
    char name[10] = "Diana";

    // Insert three items and print the list
    insertItemList( list1, "Alice" );
    printf("\n\nCurrent item contains  (Alice) %s\n", getItemList(list1));
    insertItemList( list1, "Bob" );
    printf("Current item contains  (Bob)   %s\n", getItemList(list1));
    insertItemList( list1, "Carl" );
    printf("Current item containsj (Carl) %s\n", getItemList(list1));
    displayListForward(list1);
    displayListBackward(list1);
    
    printf("\n\nCurrent item contains  (Carl)  %s\n", getItemList(list1));
    printf("Moving to NEXT item\n");
    nextItemList( list1 );
    printf("Current item contains  (Bob)   %s\n", getItemList( list1 ));

    //Try moving to previous - no change
    printf("moving to PREVIOUS item \n");
    previousItemList( list1 );
    printf("Current item contains  (Carl)  %s\n", getItemList( list1 ));

    //Add three more names into list1
    printf("\n\nAdding three items Don, Eric, Diana\n");
    addItemList( list1, "Don" );
    addItemList( list1, "Eric" );
    addItemList( list1, name );

    //Use the utility function below to display list1 forward
    displayListForward(list1);

    //Change Diana's name
    //Notice that the node is NOT modified
    printf("\nSetting DIANA to DONNY\n");
    strcpy(name, "Donny");
    displayListForward(list1);

    //Insert two more people into list1
    printf("\n\nInserting EARL and FRAN at front of list 10 :\n");
    firstItemList(list1);
    insertItemList( list1, "Earl" );
    insertItemList( list1, "Fran" );
    displayListForward(list1);

    if(isEmptyList(list1)) printf("\n\nList 1 is empty\n");
    else printf("\n\nList 1 is not empty\n");
    if(isEmptyList(list2)) printf("List 2 is empty\n");
    else printf("List 2 is not empty\n");

    //Take three people from list1 and insert into list2
    printf("\n\nRemove 3 from front of list 1 add to list 2\n");
    firstItemList(list1);
    addItemList(list2, removeItemList(list1));
    addItemList(list2, removeItemList(list1));
    addItemList(list2, removeItemList(list1));

    //Use the utility function below to display both lists forward
    printf("\nList 1 Forward\n");
    displayListForward(list1);
    printf("List 1 Forward\n");
    displayListBackward(list1);
    printf("\nList 2 Forward\n");
    displayListForward(list2);
    printf("List 2 Backward\n");
    displayListBackward(list2);

    //Free both lists
    list1 = freeList(list1);
    list2 = freeList(list2);
    if(list1 == NULL) printf("\n\nList 1 is NULL\n");
    else printf("\n\nList 1 is not NULL\n");
    if(list2 == NULL) printf("List 2 is NULL\n");
    else printf("List 2 is not NULL\n");

   return 0;
}

// Utility function to display the entire list forward
static void displayListForward(LinkedListP list)
{
    int i, count = sizeList(list);
    printf("Count is: %i, ", count);
    printf("Here's the list forward:\n");
    firstItemList(list);
    for(i=0; i<count; i++)
    {
        printf("   %s ", getItemList(list));
        nextItemList(list);
    }
    printf("\n");
}

// Utility function to display the entire list backward
static void displayListBackward(LinkedListP list)
{
    int i, count = sizeList(list);
    printf("Count is: %i, ", count);
    printf("Here's the list backward:\n");
    lastItemList(list);
    for( i=0; i<count; i++ )
    {
        printf("   %s ", getItemList(list));
        previousItemList(list);
    }
    printf("\n");
}


