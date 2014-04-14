/*
 * P1Spr14.c
 *
 * Project 1 - DS1
 * Jim Lewis
 */

#include <stdio.h>
#include "Vector.h"

void displayVector(VectorT *);

int main()
{
    // Create 2 new vectors
    VectorT *v1 = newVector();
    VectorT *v2 = newVector();

    addVector(v1, 128);
    addVector(v1, 210);
    addVector(v1, 133);
    addVector(v1, 777);
    addVector(v2, removeVector(v1, 1));
    addVector(v2, removeVector(v1, 2));
    setVector(v2, 111, 2); // invalid index
    
    addVector(v1, 73);
    addVector(v1, 5667);
    addVector(v1, 11);
    addVector(v2, removeVector(v1, 3));
    addVector(v2, removeVector(v1, 3));
    
    addVector(v1, 99);
    addVector(v1, 999);
    addVector(v1, 9999); // full, cannot add
    
    setVector(v2, 888, 3);
    
    printf("\nLooking at vector 1 ...\n");
    displayVector(v1);
    printf("\nLooking at vector 2 ...\n");
    displayVector(v2);
    
    return 0;
}

void displayVector(VectorT *v)
{
    int i;
    printf("Size of vector is %i\n", sizeVector(v));
    for(i=0; i<sizeVector(v); i++)
    {
        printf("   %i ", getVector(v, i));
    }
    printf("\n");
}

/*

 Invalid vector index [2] cannot set item.
 Vector is full, cannot add.
 Looking at vector 1
 Size of vector is 5
    128    133    73    99    999
 Looking at vector 2
 Size of vector is 4
    210    777    5667    888
 */

