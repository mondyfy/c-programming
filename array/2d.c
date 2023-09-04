#include <stdio.h>

int main() {
  int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
  printf("%d \n", matrix[1][2]);
  matrix[1][2] = 9;
  printf("%d \n", matrix[1][2]);

  return 0;
}