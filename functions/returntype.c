#include <stdio.h>

int sum(int x, int y) {
  return x + y;
}

int main() {  
  int result = sum(2, 3); 
  printf("Result is = %d \n", result);
  return 0;
}