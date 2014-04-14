/*
 * ArrayListTest.c
 *
 *  Created on: Dec 28, 2013
 *      Author: jim
 */

#include <stdio.h>
#include "ArrayList.h"

void display(ArrayListP);

int main()
{
    // Create a new ArrayList ... check size and capacity
    ArrayListP arrayList = newArrayList();
    fprintf(stderr, "\nThe size/capacity is (0, 5) %i, %i\n", sizeArrayList(arrayList), capacityArrayList(arrayList));

    // Add six items ... see if they are there
    addArrayList(arrayList, 100);
    addArrayList(arrayList, 200);
    addArrayList(arrayList, 10);
    addArrayList(arrayList, 20);
    addArrayList(arrayList, 1000);
    addArrayList(arrayList, 2000);
    fprintf(stderr, "\nThe size/capacity is (6, 10) %i, %i\n", sizeArrayList(arrayList), capacityArrayList(arrayList));
    fprintf(stderr, "\n100 200 10 20 1000 2000\n");
    display(arrayList);
    addArrayList(arrayList, 44);
    addArrayList(arrayList, 55);
    addArrayList(arrayList, 66);
    addArrayList(arrayList, 77);
    addArrayList(arrayList, 88);
    addArrayList(arrayList, 99);
    fprintf(stderr, "\nThe size/capacity is (12, 20) %i, %i\n", sizeArrayList(arrayList), capacityArrayList(arrayList));
    fprintf(stderr, "\n100 200 10 20 1000 2000 44 55 66 77 88 99\n");
    display(arrayList);

    // Try to get from an invalid index
    fprintf(stderr, "\n\nSixteenth item is (error) \n");
    fprintf(stderr, "\n%i\n", getArrayList(arrayList, 15));

    // What is the last item in the list? What is size?
    fprintf(stderr, "Last item is (99) %i\n", getArrayList(arrayList, (sizeArrayList(arrayList)-1)));

    // Replacing index 3 with 888? What is size?
    fprintf(stderr, "Setting index 3 to 888\n");
    display(arrayList);
    setArrayList(arrayList, 888, 3);
    display(arrayList);

    // Remove two items
    fprintf(stderr, "\nRemoving index 4 (1000) %i\n", removeArrayList(arrayList, 4));
    display(arrayList);
    fprintf(stderr, "Removing index 10 (99) %i\n", removeArrayList(arrayList, 10));
    display(arrayList);
    fprintf(stderr, "\nRemoving index -8 (error) %i\n", removeArrayList(arrayList, -8));
    display(arrayList);

    fprintf(stderr, "The size is (10) %i\n", sizeArrayList(arrayList));
    fprintf(stderr, "\n100 200 10 888 2000 44 55 66 77 88\n");
    display(arrayList);

    fprintf(stderr, "\nFinding index of 44 (5) %i\n", indexOfArrayList(arrayList, 44));
    fprintf(stderr, "\nFinding index of 45 (-1) %i\n", indexOfArrayList(arrayList, 45));
    fprintf(stderr, "\nFinding index of NULL pointer (-1) %i\n", indexOfArrayList(NULL, 45));

    fprintf(stderr, "\nCheck ArrayList Contains 888 (TRUE) %i\n", containsArrayList(arrayList, 888));
    fprintf(stderr, "\nCheck ArrayList Contains 887 (FALSE) %i\n", containsArrayList(arrayList, 887));

    // Clear and check size
    clearArrayList(arrayList);
    fprintf(stderr, "\nCleared ArrayList ... the size is (0) %i\n", sizeArrayList(arrayList));
    display(arrayList);
    fprintf(stderr, "Freeing the ArrayList\n");
    arrayList = freeArrayList(arrayList);
    if(arrayList == NULL) fprintf(stderr, "ArrayList is NULL\n");
    return 0;
}

void display(ArrayListP p)
{
    int i;
    for(i=0; i < sizeArrayList(p); i++)
        fprintf(stderr, "%i ", getArrayList(p, i));
    fprintf(stderr, "\n");
}



