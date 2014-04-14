/*
 *  Queue.c
 *  Created by jlewis
 *
 */

#include "Queue.h"
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

/*
 * Definition of a queue structure
 */
struct QueueT
{
	NodeP head, tail;
};

/*
 * Allocates memory for a new queue structure
 * Initialized to empty queue
 */
QueueP newQueue()
{
	QueueP q = (QueueP ) malloc(sizeof(struct QueueT));
	if( q == NULL ) fprintf(stderr, "Queue allocation failed.\n");
	q->head = q->tail = NULL;
	return q;
}

/*
 * Insert the item at the tail of the queue
 */
void insertQueue(QueueP q, NodeItemT c)
{
    if(q == NULL) return;
	NodeP p = newNode(c);
	if( emptyQueue(q) )
	{
		q->head = q->tail = p;
		return;
	}
	setNext(p, getNext(q->tail));
	setNext(q->tail, p);
	q->tail = p;
}

/*
 * Remove and return the item at head of queue
 */
NodeItemT removeQueue(QueueP q)
{
    if(q == NULL) return NO_ITEM;
	NodeItemT temp = NO_ITEM;
	if(emptyQueue(q))
		fprintf(stderr, "Queue is empty!\n");
	else
	{
		NodeP p = q->head;
		temp = getInfo(q->head);
		q->head = getNext(q->head);
		freeNode(p);
	}
	return temp;
}

/*
 * Returns copy of item at head of queue
 * Queue is unchanged
 */
NodeItemT peekQueue(const QueueP q)
{
    if(q == NULL) return NO_ITEM;
	NodeItemT temp = NO_ITEM;
	if(! emptyQueue(q)) temp = getInfo(q->head);
	else fprintf(stderr, "Queue is empty!\n");
	return temp;
}

/*
 * Returns true if queue is currently empty
 * else false
 */
int emptyQueue(const QueueP q)
{
    if(q == NULL) return 0;
	return (q->head == NULL);
}

/*
 * Frees the memory used for the queue structure
 * Frees the memory used by all nodes
 * Returns NULL
 */
QueueP freeQueue(QueueP q)
{
    if(q == NULL) return NULL;
	NodeP p = q->head;
	while( p != NULL )
	{
		q->head = getNext(q->head);
		p = freeNode(p);
		p = q->head;
	}
	free(q);
    return NULL;
}

