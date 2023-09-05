#include <stdio.h>

enum Level {
  LOW = 5,
  MEDIUM, // Now 6
  HIGH // Now 7
};
  
int main() {
  // Create an enum variable and assign a value to it
  enum Level myVar = HIGH;
 
  // Print the enum variable
  printf("%d\n", myVar);
  
  
  return 0;
}