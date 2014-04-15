/*
 *  Node.c
 *  Created by jlewis on 7/3/08.
 *
 */
#include "Node.h"
#include <stdio.h>
#include <stdlib.h>

typedef int bool;
#define TRUE 1
#define FALSE 0

/*
 * Definition of Node Struct
 */
struct NodeT
{
	NodeItemT info;
	struct NodeT *next;
};

/*
 * Allocates memory for a new node
 * Initializes node with the item
 */
NodeP newNode(NodeItemT c)
{
	NodeP p = (NodeP) malloc(sizeof(struct NodeT));
	if(p == NULL) fprintf(stderr, "Node allocation failed.\n");
	else
	{
		p->next = NULL;
		p->info = c;
	}
	return p;
}

/*
 * Returns the information in the node
 */
NodeItemT getInfo(NodeP p)
{
    if(p == NULL) return NO_ITEM;
	return p->info;
}

/*
 * Sets the info in the node to the supplied item
 */
void setInfo(NodeP p, NodeItemT c)
{
    if(p == NULL) return;
	p->info = c;
}

/*
 * Returns the pointer to the next node
 */
NodeP getNext(NodeP p)
{
	if(p == NULL) return NULL;
	return p->next;
}

/*
 * Sets this node to point supplied node address
 */
void setNext(NodeP p, NodeP q)
{
    if(p == NULL) return;
	p->next = q;
}

/*
 * Frees the node
 * Returns NULL
 */
NodeP freeNode(NodeP p)
{
    if(p == NULL) return NULL;
	else free(p);
    return NULL;
}
