/*
 *  Node.h
 *  Created by jlewis on 7/3/08.
 *
 */
#ifndef _NODE_H
#define _NODE_H

/*
 * Definition of a Node Item
 */
typedef char NodeItemT;
#define NO_ITEM '\0'

/*
 * Definition of a Node pointer
 */
typedef struct NodeT *NodeP;

/*
 * INTERFACE TO THE NODE ADT
 */

/*
 * Allocates memory for a new node
 * Initializes node with the item
 */
NodeP newNode(NodeItemT);

/*
 * Returns the information in the node
 */
NodeItemT getInfo(NodeP);

/*
 * Sets the info in the node to the supplied item
 */
void setInfo(NodeP, NodeItemT);

/*
 * Returns the pointer to the next node
 */
NodeP getNext(NodeP);

/*
 * Sets this node to point supplied node address
 */
void setNext(NodeP, NodeP);

/*
 * Frees the node
 * Returns NULL
 */
NodeP freeNode(NodeP);

#endif