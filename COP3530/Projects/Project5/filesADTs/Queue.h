/*
 *  Queue.h
 *  Created by jlewis
 *
 */

#ifndef _QUEUE_H
#define _QUEUE_H

#include <stdio.h>
#include "Node.h"

/*
 * Definition of a queue pointer
 */
typedef struct QueueT *QueueP;

/*
 * Interface to Queue ADT
 */

/*
 * Allocates memory for a new queue structure
 * Initialized to empty queue
 */
QueueP newQueue();

/*
 * Insert the item at the tail of the queue
 */
void insertQueue(QueueP, NodeItemT);

/*
 * Remove and return the item at head of queue
 */
NodeItemT removeQueue(QueueP);

/*
 * Returns true if queue is currently empty
 * else false
 */
int emptyQueue(const QueueP);

/*
 * Returns copy of item at head of queue
 * Queue is unchanged
 */
char peekQueue(const QueueP);

/*
 * Frees the memory used by all nodes
 * Frees the memory used for the queue structure
 * Returns NULL
 */
QueueP freeQueue(QueueP);

#endif
