#ifndef NODE_H
#define NODE_H

#include <stdio.h>

// Definition of the node structure for the linked list.
typedef struct node {
  struct node* nextPtr; // Pointer to the next node in the list.
  char phrase[100];     // Array to store the phrase in the node.
} node;

#endif
