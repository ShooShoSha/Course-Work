/*
 *  Stack.c
 *  Created by jlewis on 7/3/08.
 *
 */

#include "Stack.h"
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

/*
 * Definition of a stack structure
 */
struct StackT
{
	NodeP top;
};

/*
 * Allocates memory for a new stack structure
 * Initialized to empty stack
 */
StackP newStack()
{
	StackP s = (StackP ) malloc(sizeof(struct StackT));
	if( s == NULL ) fprintf(stderr, "Stack allocation failed.\n");
	s->top = NULL;
	return s;
}

/*
 * Push the item onto the top of stack
 */
void pushStack(StackP s, NodeItemT c)
{
    if(s == NULL) return;
	NodeP p = newNode(c);
	if( emptyStack(s) )
	{
		s->top = p;
		return;
	}
	setNext(p, s->top);
	s->top = p;
}

/*
 * Remove and return the item on top of the stack
 */
NodeItemT popStack(StackP s)
{
    if(s == NULL) return NO_ITEM;
	NodeItemT temp = NO_ITEM;
	if(emptyStack(s))
		fprintf(stderr, "Stack is empty!\n");
	else
	{
		NodeP p = s->top;
		temp = getInfo(p);
		s->top = getNext(p);
		freeNode(p);
	}
	return temp;
}

/*
 * Returns copy of item on top of stack
 * Stack is unchanged
 */
NodeItemT peekStack(const StackP s)
{
    if(s == NULL) return NO_ITEM;
	NodeItemT temp = NO_ITEM;
	if(!emptyStack(s)) temp = getInfo(s->top);
	else fprintf(stderr, "Stack is empty!\n");
	return temp;
}

/*
 * Returns true if stack is currently empty
 * else false
 */
int emptyStack(const StackP s)
{
    if(s == NULL) return 0;
	return (s->top == NULL);
}

/*
 * Frees the memory used for the stack structure
 * Frees the memory used by all nodes
 * Returns NULL
 */
StackP freeStack(StackP s)
{
    if(s == NULL) return NULL;
	NodeP p = s->top;
	while( p != NULL )
	{
		s->top = getNext(s->top);
		p = freeNode(p);
		p = s->top;
	}
	free(s);
    return NULL;
}

