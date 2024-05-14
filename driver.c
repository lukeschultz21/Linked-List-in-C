/*Luke Schultz
CPSC 1071: 001
Cyberbooleans
December 6, 2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "LinkedList.h"

int main(){
  char phrase[100];

  while(1){
    printf("Enter a word or phrase, or -99 to end: ");
    fgets(phrase, sizeof(phrase), stdin);             // Read input from the user.
    phrase[strcspn(phrase, "\n")] = 0;                // Remove the newline character from input.

    if(strcmp("-99", phrase) == 0){
      break; // Exit the loop if the user enters -99.
    }

    insert(phrase); // Insert the entered phrase into the linked list.
  }

  print(); // Print the contents of the linked list.
  return 0;
}
