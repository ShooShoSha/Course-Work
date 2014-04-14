/*
 * StackTest.c
 * Created by jlewis.
 * Compile using this command:
 *        gcc Stack.c StackTest.c
 *
*/

#include <stdio.h>
#include "Stack.h"

int main()
{
    StackT stack1;
    StackT *stackPtr1 = &stack1;
    initStack(stackPtr1);
    
    printf("Pushing 'A' 'B' 'C' 'D' onto stack1\n");
    pushStack(stackPtr1, 'A');
    pushStack(stackPtr1, 'B');
    pushStack(stackPtr1, 'C');
    pushStack(stackPtr1, 'D');
    
    printf("Popping and displaying all items from stack 1.\n");
    while(!isEmptyStack(stackPtr1))
        printf("%c ", popStack(stackPtr1));
    printf("\n\n");

    return 0;
}

	