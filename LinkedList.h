#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdbool.h>

#include "Node.h"

// Function to insert a new node with a phrase into the linked list.
void insert(char[]);

// Function to delete the node at the beginning of the linked list.
void deleteNode();

// Function to check if the linked list is empty.
bool isEmpty();

// Function to print the entire linked list.
void print();

// Helper function to print nodes starting from a given node.
void printList(node*);

#endif
