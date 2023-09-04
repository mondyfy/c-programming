#include <stdio.h>

int main() {
  // Create a string
  char firstName[30];

  // Ask the user to input some text (name)
  printf("Enter your first name and press enter: \n");

  // Get and save the text
  scanf("%s", firstName);

  // Output the text
  printf("Hello %s \n ", firstName);
  
  return 0;
}
