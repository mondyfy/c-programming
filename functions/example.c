#include <stdio.h>

// Create a function
void myFunction() {
  printf("I just got executed! \n");
}

int main() {
  myFunction(); // call the function
  myFunction();
  myFunction();
  
  return 0;
}