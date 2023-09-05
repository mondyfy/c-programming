#include <stdio.h>

// Function declaration
int sum(int, int);

// The main method
int main() {  
  int result = sum(5, 3);  // call the function
  printf("Result is = %d\n", result);
  return 0;
}

// Function definition
int sum(int x, int y) {
  return x + y;
}