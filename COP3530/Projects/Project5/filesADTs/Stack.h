/*
 *  Stack.h
 *  Created by jlewis
 *
 */

#ifndef _STACK_H
#define _STACK_H

#include <stdio.h>
#include "Node.h"

/*
 * Definition of a stack pointer
 */
typedef struct StackT *StackP;

/*
 * Interface to Stack ADT
 */

/*
 * Allocates memory for a new stack structure
 * Initialized to empty stack
 */
StackP newStack();

/*
 * Push the item onto the top of stack
 */
void pushStack(StackP , NodeItemT);

/*
 * Remove and return the item on top of the stack
 */
NodeItemT popStack(StackP);

/*
 * Returns true if stack is currently empty
 * else false
 */
int emptyStack(const StackP);

/*
 * Returns copy of item on top of stack
 * Stack is unchanged
 */
char peekStack(const StackP);

/*
 * Frees the memory used by all nodes
 * Frees the memory used for the stack structure
 * Returns NULL
 */
StackP freeStack(StackP);

#endif
