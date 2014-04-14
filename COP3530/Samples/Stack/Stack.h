/*
 *  Stack.h
 *  Created by jlewis.
*/

#ifndef _STACK_H
#define _STACK_H

/*
 * Definitions
*/
#define DEFAULT_CAPACITY 5

typedef char ItemT;
typedef int Boolean;

typedef struct
{
    int top;
    ItemT items[DEFAULT_CAPACITY];
} StackT;

/*
 * Interface to Stack ADT
*/
void initStack(StackT *);
void pushStack(StackT *, ItemT);
ItemT popStack(StackT *);
Boolean isEmptyStack(const StackT *);

#endif


