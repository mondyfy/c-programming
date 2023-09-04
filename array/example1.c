#include <stdio.h>

int main() {
  int myNumbers[] = {25, 50, 75, 100};
  printf("%d \n", myNumbers[0]);

  myNumbers[0] = 33;

  printf("%d \n", myNumbers[0]);
 
  return 0;
}