#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "LinkedList.h"

node* head = NULL; // Global pointer to the first node in the linked list.

// Function to insert a new node at the end of the linked list.
void insert(char newPhrase[]) {
  node* newNode = (node*)malloc(sizeof(node)); // Dynamically allocate memory for a new node.
  strcpy(newNode->phrase, newPhrase);          // Copy the provided phrase into the node.
  newNode->nextPtr = NULL;                     // Set the next pointer of the new node to NULL.

  if(head == NULL) {
    head = newNode; // If the list is empty, make the new node the head of the list.
  } else {
    node* temp = head;
    // Traverse to the end of the list.
    while(temp->nextPtr != NULL) {
      temp = temp->nextPtr;
    }
    temp->nextPtr = newNode; // Append the new node at the end of the list.
  }
}

// Function to delete the first node in the linked list.
void deleteNode() {
  if (head != NULL) {
    node* temp = head;     // Temporarily store the head node.
    head = head->nextPtr;  // Move the head to the next node.
    free(temp);            // Free the memory of the original head node.
  }
}

// Function to print the linked list starting from a given node.
void printList(struct node* n){
  if(n != NULL){
    // Different cases for printing depending on the number of nodes in the list.
    if(n->nextPtr == NULL){
      printf("You've entered the following node: %s\n", n->phrase);
    } else if(n->nextPtr != NULL && n->nextPtr->nextPtr == NULL){
      printf("You've entered the following nodes: %s", n->phrase);
      n = n->nextPtr;
      printf(" and %s\n", n->phrase);
    } else {
      printf("You've entered the following nodes: ");
      while(n->nextPtr != NULL){
        printf("%s, ", n->phrase);
        n = n->nextPtr;
      }
      printf("and %s\n", n->phrase);
    }
  }
}

// Function to print the entire linked list.
void print() {
  printList(head);
}

