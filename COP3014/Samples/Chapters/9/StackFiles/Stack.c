/*
 *  Stack.c
 *  Created by jlewis.
 */

#include "Stack.h"
#include <stdlib.h>
#include <stdio.h>

#define TRUE 1
#define FALSE 0

void initStack(StackT *stackPtr)
{
    stackPtr->top = -1;
}

void pushStack(StackT *stackPtr, ItemT c)
{
    // Beware!!! No test for full.
    stackPtr->items[++stackPtr->top] = c;
}

ItemT popStack(StackT *stackPtr)
{
    if(isEmptyStack(stackPtr))
    {
        fprintf(stderr, "Cannot Pop, Stack is Empty!\n");
        return '\0';
    }
    return stackPtr->items[stackPtr->top--];
}

Boolean isEmptyStack(const StackT *stackPtr)
{
    return (stackPtr->top == -1);
}



